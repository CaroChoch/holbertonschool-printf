#include "main.h"

/**
 * get_function - function that matches
 * specifiers and returns count.
 *
 * @format: string of characters.
 * @argument: specifiers to be checked
 * @argp: argument pointer
 *
 * Return: number of characters printed.
 */

int get_function(const char *format, print_type argument[], va_list argp)
{
	int i, j, count = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}

			for (j = 0; argument[j].type; j++)
			{
				if (*argument[j].type == format[i + 1])
				{
					count += argument[j].f(argp);
					break;
				}
			}
			i++;
			if (!argument[j].type)
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
	}
	return (count);
}

