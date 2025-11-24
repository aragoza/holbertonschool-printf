#ifndef _TEST_HEADER_
#define _TEST_HEADER_

typedef struct percent {

	char * percent;
	void (* function_percent)(char *);
} percent_func_type;

int (*get_percent_func)(char *s);

int f_char(char percent);
int f_string(char *percent);
int f_int(int percent);
int f_float(float percent);

#endif /** _TEST_HEADER_ */