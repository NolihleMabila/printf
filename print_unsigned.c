#include "main.h"

/**
 * print_unsigned - handles unsigned integer
 * @list: Num
 *
 * Return: Length of the num
 **/
int print_unsigned(va_list list)
{
	char *p;
	int n;

	p = to_ascii(va_arg(list, unsigned int), 10);

	n = print((p != NULL) ? p : "NULL");

	return (n);
}
