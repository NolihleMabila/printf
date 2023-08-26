#include "main.h"
/**
 * print_string -handles a string format
 * @list: list.
 *
 * Return: Str length.
 */

int print_string(va_list list)
{
	char *p;
	int p_length;

	p = va_arg(list, char*);
	p_length = print((p != NULL) ? p : "(null)");

	return (p_length);
}
