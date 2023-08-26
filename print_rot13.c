#include "main.h"

/**
 * print_rot13 - Prints the rot13'ed string
 * @list: String to encode
 *
 * Return: encoded string
 **/
int print_rot13(va_list list)
{
	char *p;
	int p_length;

	p = va_arg(list, char *);
	p_length = rot13((p != NULL) ? p : "(ahyy)");

	return (p_length);
}
