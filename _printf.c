#include "main.h"

/**
 * _printf - function that works as
 * printf function.
 *
 * @format: character string.
 *
 * Return: the number of characters
 * printed.
 */

int _printf(const char *format, ...)
{
	va_list argp;
	int i;
	print_type argument[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{NULL, NULL}
	};

/* complete list of print_type argument[] later */


	i = 0;

	if (!format)
		return (-1);

	va_start(argp, format);

	i = get_function(format, argument, argp);

	va_end(argp);
	return (i);
}

