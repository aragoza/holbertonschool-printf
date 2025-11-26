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

	int i, size;
	char * size_value;
	void (*temporary_func)(char *)
	va_list parameter;

	va_start (parameter, format)

	va_arg (parameter, format); /** i am not sure if it is format here for second parameter */

	for(i = 0, format[i] != '\0', i++)
	{
		if(format[i] == '%')
		{
			i++;
			
			if(get_percent_func(format[i]) == NULL)
			{
				continue;
			}

			temporary_func = get_percent_func(format[i]); /**  */
			*size_value = temporary_func(va_arg(parameter)); /** we stock the value to replace later when we will print the whole string */
			
			size += size(*size_value) - 2; /** we check size at time to be sure we have the good size after for the malloc */
			*size_value++;  /** increment the pointer the stock the value in the next block of memory contiguous */
		}
		size++;
		if(format[i - 1] == NULL && i > 0)
			break;
	}
	va_end(parameter); /** end the variadic now we have parcour all the parameter */

	va_list list;

	va_start (list, format);

	for(i = 0, )

}