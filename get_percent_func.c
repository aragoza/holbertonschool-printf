#include "main.h"

/**
 * get_percent_func - is a function pointer that check the operator passed by
 * to know what function is associated and use the good function later in the
 * _printf function. We check assoication between struct and letter passed.
 *
 * @letter_percent: is normally a letter but could be a string in a 
 * more developped programm later
 *
 * Return: (func_and_type[i].function_percent) wich is the function associated to
 * the % identified
 */

char *(*get_percent_func(char letter_percent))(va_list)
{
	percent_func_type func_and_type[] = {
		{'c', f_char},
		{'s', f_string},
		{'d', f_int},
		/*{'f', f_float},*/
		{'\0', NULL}
	};

	int i;
	
	for(i = 0; func_and_type[i].percent != '\0'; i++)
	{
		if(func_and_type[i].percent == letter_percent)
			return (func_and_type[i].function_percent);
	}

	return (NULL);
}
