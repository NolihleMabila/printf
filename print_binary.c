#include "main.h"

/**
 * print_binary - the unsigned int argument is converted to binary.
 * @list: argument
 *
 * Return: the number
 **/
int print_binary(va_list list)
{
	char *k;
	int i;

	k = to_ascii(va_arg(list, unsigned int), 2);

	i = print(k);

	return (i);
}
