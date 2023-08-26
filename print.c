#include "main.h"
/**
 * print - prints char.
 * @str: str.
 *
 * Return: string length.
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		printchar(str[i]);

	return (i);
}
