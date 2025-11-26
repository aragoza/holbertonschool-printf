#ifndef _TEST_HEADER_
#define _TEST_HEADER_

#include <stdarg.h>

typedef struct percent {

	char * percent;
	void (*function_percent(void * percent))();
} percent_func_type;

void (*get_percent_func)(char *letter_percent);

char * f_char(void percent);
char * f_string(void *percent);
char * f_int(void percent);
char * f_float(void percent);

#endif /** _TEST_HEADER_ */