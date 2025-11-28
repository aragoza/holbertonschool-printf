#include "main.h"

/**
 * f_char - function that convert a char into a string
 *
 * @percent: is the va_list that contain the char to convert
 *
 *	Return: (character) the string that has stock the char converted
 */


char * f_char(va_list percent)
{
	char * character = malloc(1);
	if (character == NULL)
		return (NULL);

	character[0] = (char) va_arg(percent, int);
	return (character);
}

/**
 * f_string - function that convert a string into another string
 *
 * @percent: is the va_list that contain the string to convert
 *
 * Return: (string1) the string that has stock the string converted
 */

char * f_string(va_list percent)
{
	int i;
	char * string_holder;
	char * string1;

	string_holder = va_arg(percent, char *);

	if (string_holder == NULL)
		return (NULL);	

	string1 = malloc(_strlen(string_holder) + 1);

	if (string1 == NULL)
		return (NULL);

	for (i = 0; string_holder[i] != '\0'; i++)
	{
		string1[i] = string_holder[i];
	}

	return (string1);
}
