#include "main.h"

/**
 * print_integer - prints integers
 * @argp: argument
 *
 * Return: result.
 */

int print_integer(va_list argp)
{
	int result = 0;
	unsigned int div = 1;
	unsigned int number;
	int index;

	index = va_arg(argp, int);

	if (index < 0)
	{
		result += _putchar('-');
		number = index * (-1);
	}
	else
		number = index;

	while (number / div > 9)
		div *= 10;

	while (div != 0)
	{
		result += _putchar(number / div + '0');
		number %= div;
		div /= 10;
	}
	return (result);
}

