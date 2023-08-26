#include "main.h"

/**
 * format_handler - handles different formats
 * @str: String argument.
 * @list: List of arguments
 *
 * Return: Total lenght of the arguments
 **/
int format_handler(const char *str, va_list list)
{
	int n, i, output;

	n = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			output  = percentage_handler(str, list, &i);
			if (output == -1)
				return (-1);

			n += output;
			continue;
		}

		printchar(str[i]);
		n = n + 1;
	}


	return (n);
}
