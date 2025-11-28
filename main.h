#ifndef _TEST_HEADER_
#define _TEST_HEADER_

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct percent_str {

	char percent;
	char *(*function_percent)(va_list);
} percent_func_type;

int _printf(const char *format, ...);

char *(*get_percent_func(char c))(va_list);

char * f_char(va_list percent);
char * f_string(va_list percent);
char * f_int(va_list percent);
char * f_float(va_list percent);

int _strlen(char *s);

#endif /** _TEST_HEADER_ */
