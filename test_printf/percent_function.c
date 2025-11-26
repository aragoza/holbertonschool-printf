#include "test_header.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */


char * f_char(char percent)
{
	char * character;
	*character = percent;

	return (character);
}

char * f_string(char * percent)
{
	char * string;
	string = percent;
	
	return (string);
}

char * f_int(int percent)
{
	char * number;
	int reverse_number = 0;

	while(percent > 0)
	{
		reverse = (reverse * 10) + (percent % 10);
		percent = percent / 10;
	}

	while(reverse_number > 0)
	{
		*number = '0' + (reverse_number % 10);
		reverse_number = reverse_number / 10;
		*number++;
	}
	
	return (number);
}

char * f_float(float percent)
{
	
}