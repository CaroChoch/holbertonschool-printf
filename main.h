#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct print_type - defines a
 * structure for symbols and functions.
 *
 * @type: the operator
 * @f: the function associated.
 */

typedef struct print_type
{
	char *type;
	int (*f)(va_list argp);
} print_type;


/* the main functions*/

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list argp);
int print_string(va_list argp);
int print_integer(va_list argp);
int print_number(va_list argp);
int print_percent(va_list argp);
int get_function(const char *format, print_type argument[], va_list argp);




#endif

