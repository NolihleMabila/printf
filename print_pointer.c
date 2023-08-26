#include "main.h"
#include <stdio.h>


/**
 * print_pointer - Print a pointer
 * @list: Num
 *
 * Return: Length of the num
 **/
int print_pointer(va_list list)
{
	char *p;
	int n;

	p = to_ascii(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p, "0"))
		return (print("(nil)"));

	n = print("0x");

	if (!_strcmp(p, "-1"))
		n += print("ffffffffffffffff");
	else
		n += print(p);

	return (n);
}
