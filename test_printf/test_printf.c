#include "test_header.h"

/**
 * _printf - write a string and every time it detect an 
 * identifier it replace by the value of the variable
 * passed in parameter
 *
 * @format: 
 *
 *
 */

int _printf(const char *format, ...)
{

	int i, j, size = 0;
	char * value;
	char *string_will_be_print;
	char *(*temporary_func)(va_list);
	va_list parameter;

	va_start (parameter, format);

	string_will_be_print = malloc(1000);
	if(string_will_be_print == NULL)
	{	
		return (-1);
	}

	for(i = 0; format[i] != '\0'; i++)
	{
		if(format[i] == '%')
		{
			i++;
			if(format[i] == '\0')
			{
				i--;
				continue;
			}


			temporary_func = get_percent_func(format[i]);
			if(temporary_func == NULL)
			{
				i--;
				continue;
			}

			value = temporary_func(parameter); /** we stock the value to replace later when we will print the whole string */
			for(j = 0; value[j] != '\0'; j++)
			{
				string_will_be_print[size] = value[j];
				size++;
			}

		}

		else
		{
			string_will_be_print[size] = format[i];
		}
		size++;
	}

	va_end(parameter); /** end the variadic now we have parcour all the parameter */

	string_will_be_print[size] = '\0';

	write(1, string_will_be_print, size); /** normally we can write this because we know the size of the string */

	free(string_will_be_print);

	return (size);
}