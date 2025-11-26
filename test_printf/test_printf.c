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

	int i, j, size;
	char * value;
	char *string_will_be_print;
	void (*temporary_func)(char *);
	va_list parameter;

	va_start (parameter, format);

	va_arg (parameter, char *); /** i am not sure if it is format here for second parameter */

	for(i = 0, format[i] != '\0', i++)
	{
		if(format[i] == '%')
		{
			i++;
			size++;

			temporary_func = get_percent_func(format[i]); /**  */
			if(temporary_func == NULL)
			{
				continue;
			}

			value = temporary_func(va_arg(parameter, char *)); /** we stock the value to replace later when we will print the whole string */
			for(j = 0, value[j] != '\0', j++)
			{
				string_will_be_print[size] = value[j];
				size++;
			}

			size += -2;
		}
		else if(format[i - 1] == '\0' && i > 0)
		{
			break;
		}
		else
		{
			string_will_be_print[size] = format[i]
		}
		size++;
	}
	va_end(parameter); /** end the variadic now we have parcour all the parameter */
	
	write(1, &string_will_be_print, size); /** normally we can write this because we know the size of the string */

	return(size);
}