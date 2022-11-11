
/**
 * convert - converts numbers to strings in other bases
 * @num: number to convert to str
 * @base: number base to convert to
 * Return: 0
 */
char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[33];
	char *ptr;

	ptr = &buffer[32];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
