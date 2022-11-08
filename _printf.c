#include "main.h"

/**
 * _printf - printf function
 * @format: character
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int len = 0;
	int n = 0;
	print_type types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_list argp;
	va_start(argp, format);

	while (*format)
	{
		if (*format == %)
			format = print_percent(argp, format, types);
		else
			format = print_char(types, format);
		if (format == NULL)
		{
			_putchar("(NULL");
			va_end(argp);
			return (len);
		}
	}
	va_end(argp);
	return (len);
}
