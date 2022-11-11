#include "main.h"

/**
 * print_string - Prints a string
 *
 * @argp: list of arguments
 *
 * Return: Will return the amount of characters printed.
 */

int print_string(va_list argp)
{
	int i;
	char *str = va_arg(argp, char *);

	if (!str)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);

}

