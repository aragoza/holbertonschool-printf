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


int f_char(char percent)
{
	return (write(1, &percent, 1));
}

int f_string(char * percent)
{
	return (write(1, &percent, 1));
}

int f_int(int percent)
{

}

int f_float(float percent)
{
	
}