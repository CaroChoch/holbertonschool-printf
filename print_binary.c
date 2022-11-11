#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - print a binary number
 * @argp: unsigned integer input
 *
 * Return: no return.
 */

int print_binary(va_list argp)
{
	unsigned int c;
	int  len, j;
	int array[10000];

	c = va_arg(argp, int);
	len = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c > 0)
	{
		array[len] = c % 2;
		c = c / 2;
		len++;
	}
	for (j = len - 1; j >= 0; j--)
		_putchar(array[j] + '0');
	return (len);
}

