#include "main.h"


/**
 * print_upp_hexadecimal - Print a num in hexadecimal format
 * @list: Num
 *
 * Return: Length of the num
 **/
int print_upp_hexadecimal(va_list list)
{
	char *p;
	int n;

	p = to_ascii(va_arg(list, unsigned int), 16);
	p = str_to_upper(p);
	n = print((p != NULL) ? p : "NULL");
	return (n);
}
