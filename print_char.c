#include "main.h"
/**
 * print_char - print char.
 * @list: list.
 *
 * Return: 1
 */
int print_char(va_list list)
{

	printchar(va_arg(list, int));
	return (1);
}
