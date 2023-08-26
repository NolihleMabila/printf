#include "main.h"

/**
 * print_integer - Print a num
 * @list: Num to print
 *
 * Return: Length
 **/
int print_integer(va_list list)
{
	char *p;
	int n;

	p = to_ascii(va_arg(list, int), 10);

	n = print((p != NULL) ? p : "NULL");

	return (n);
}
