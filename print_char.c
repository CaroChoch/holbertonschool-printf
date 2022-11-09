#include "main.h"

/**
 * print_char - Prints character
 *
 * @argp: list of arguments
 *
 * Return: Will return the amount of characters printed.
 */

int print_char(va_list argp)
{
	_putchar(va_arg(argp, int));
	return (1);
}

