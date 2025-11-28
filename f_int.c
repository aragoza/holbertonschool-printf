#include "main.h"

/** 
 * f-int - function that convert an integer into a string
 *
 * @percent: is the va_list that contain the integer to convert
 *
 * Return: (number) the string that has stock the integer converted
 */

char * f_int(va_list percent)
{
	int stock_int = va_arg(percent, int);
	char * number;
	int reverse_number = 0;
	int percent_number = stock_int;
	int size = 0;
	int condition_negative = 0;
	int i = 0;

	if (percent_number == 0)
	{
		number = malloc(1);
		if	(number == NULL)
			return (NULL);

		number[0] = '0';
		return (number);
	}
	if (percent_number < 0)
	{	
		percent_number = -percent_number;
		size++;
		condition_negative = 1;

	}	
	while(percent_number > 0)
	{
		reverse_number = (reverse_number * 10) + (percent_number % 10);
		percent_number = percent_number / 10;
		size++;
	}

	if (condition_negative == 1)
	{
		number = malloc(size);
		if	(number == NULL)
			return (NULL);

		number[i] = '-';
		i++;
	}

	else
	{
		number = malloc(size);
		if	(number == NULL)
			return (NULL);
	}

	while(reverse_number > 0)
	{
		number[i] = '0' + (reverse_number % 10);
		reverse_number = reverse_number / 10;
		i++;
	}

	return (number);
}
