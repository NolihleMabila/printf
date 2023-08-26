#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int print_string(va_list);
int printchar(char);
int buffer(char);
int print(char *str);
int _printf(const char *format, ...);
int _strlen(const char *);
int print(char *);
char *to_ascii(long int, int);
int print_binary(va_list);
int print_rot13(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_low_hexadecimal(va_list);
int print_upp_hexadecimal(va_list);
int is_lowercase(char c);
char *str_to_upper(char *str);
int rot13(char *s);
int _strcmp(char *, char *);
int print_pointer(va_list);
int print_reverse(va_list);
int format_handler(const char *, va_list);
int percentage_handler(const char *, va_list, int *);
int print_char(va_list);
int print_integer(va_list);
/**
 * struct _format - typedef struc.t
 *
 * @type: format rtpe
 * @f: function
 **/

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif /* MAIN_H */
