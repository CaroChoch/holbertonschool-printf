#include "main.h"

/**
 * print_char - print a char
 * @types: arguments
 *
 * Return: 0
 */

int print_char(va_list types)
{

	char ch = va_arg(types, int);

	_putchar(ch);

	return (1);
}
