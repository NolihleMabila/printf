#include "main.h"

/**
 * print_reverse - Print a string in reverse format
 * @list: List of arguments
 *
 * Return: Length of the string
 **/
int print_reverse(va_list list)
{
	int i, n;
	const char *str;

	str = va_arg(list, const char *);

	n =  _strlen(str);

	for (i = n - 1; i >= 0; i--)
		printchar(str[i]);

	return (n);
}
