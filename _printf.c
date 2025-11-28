#include "main.h"

/**
 * _printf - write a string and every time it detect an 
 * identifier it replace by the value of the variable
 * passed in parameter
 *
 * @format: character string that contain normal characters and percent
 *
 * Return: (size) the size of the string printed
 */

int _printf(const char *format, ...)
{

	int i, j, size = 0;
	char * value;
	char *string_will_be_print;
	char *(*temporary_func)(va_list);
	va_list parameter;

	if (format == NULL)
		return (-1);

	va_start (parameter, format);

	string_will_be_print = malloc(1000);
	if (string_will_be_print == NULL)
	{	
		return (-1);
	}

	for(i = 0; format[i] != '\0'; i++)
	{
		if(format[i] == '%')
		{
			if(format[i + 1] == '\0')
			{
				string_will_be_print[size] = '%';
				size++;
				string_will_be_print[size] = '\0';
				write(1, string_will_be_print, size);
				free(string_will_be_print);
				va_end(parameter);
				return (size);
			}

			i++;

			temporary_func = get_percent_func(format[i]);
			if(temporary_func == NULL)
			{
				string_will_be_print[size] = '%';
				size++;
				string_will_be_print[size] = format[i];
				continue;
			}

			value = temporary_func(parameter);
			if (value == NULL)
				value = "(null)";

			for(j = 0; value[j] != '\0'; j++)
			{
				string_will_be_print[size] = value[j];
				size++;
			}

		}

		else
		{
			string_will_be_print[size] = format[i];
			size++;
		}

	}

	/** end the variadic now we have parcour all the parameter */
	va_end(parameter);

	string_will_be_print[size] = '\0';

	write(1, string_will_be_print, size);

	free(string_will_be_print);

	return (size);
}
