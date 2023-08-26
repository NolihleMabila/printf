#include "main.h"

/**
 * to_ascii - converts from integer to ascii values
 * @number: num
 * @base: base
 *
 * Return: character
 **/
char *to_ascii(long int number, int base)
{
	static char *list = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *k;
	unsigned long n = number;

	if (number < 0)
	{
		n = -number;
		sign = '-';
	}
	k = &buffer[49];
	*k = '\0';

	do      {
		*--k = list[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--k = sign;
	return (k);
}
