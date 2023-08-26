#include "main.h"
/**
 * percentage_handler - handles percentage formats
 * @string: String format
 * @list: List of arguments
 * @i: iterator
 *
 * Return: length
 **/
int percentage_handler(const char *string, va_list list, int *i)
{
int n, k, formats_;
format formats[] = {
{'s', print_string}, {'c', print_char},
{'d', print_integer}, {'i', print_integer},
{'b', print_binary}, {'u', print_unsigned},
{'o', print_octal}, {'x', print_low_hexadecimal},
{'X', print_upp_hexadecimal}, {'p', print_pointer},
{'r', print_reverse}, {'R', print_rot13},
};

*i = *i + 1;

if (string[*i] == '\0')
return (-1);

if (string[*i] == '%')
{
printchar('%');
return (1);
}

formats_ = sizeof(formats) / sizeof(formats[0]);
for (n = k = 0; k < formats_; k++)
{
if (string[*i] == formats[k].type)
{
n = formats[k].f(list);
return (n);
}
}

printchar('%'), printchar(string[*i]);

return (2);
}
