#include "test_header.h"

/**
 *
 * 
 *
 *
 *
 *
 *
 *
 *
 */

int (*get_percent_func)(char *letter_percent)
{
	percent_func_type func_and_type[] = {
        {"c", f_char},
        {"s", f_string},
        {"d", f_int},
        {"f", f_float},
        {NULL, NULL}
    };

    int i;
    
    for(i = 0, letter_percent[0] != NULL, i++)
    {
        if(func_and_type[i].percent == letter_percent[0])
            return (func_and_type[i].function_percent);
    }

    return (NULL);
}