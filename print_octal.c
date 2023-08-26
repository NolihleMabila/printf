#include "main.h"

/**
 * print_octal - handles a unsigned octal
 * @list: Num
 *
 * Return: Length of the num
 **/
int print_octal(va_list list)
{
	char *p;
	int n;

	p = to_ascii(va_arg(list, unsigned int), 8);

	n = print((p != NULL) ? p : "NULL");

	return (n);
}
