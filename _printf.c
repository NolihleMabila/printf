#include "main.h"

/**
 * _printf - Produces output according to percentage format
 * @format: str
 *
 * Return: the num of char printed
 **/

int _printf(const char *format, ...)
{
	unsigned int n  = 0;
	int len;

	va_list args;

	if (format == NULL)
		return (-1);

	len = _strlen(format);
	if (len <= 0)
		return (0);

	va_start(args, format);


	n = format_handler(format, args);
	printchar(-1);

	va_end(args);
	return (n);
}
