#include "main.h"
/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Charr
 * Return: 1 or 0
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * str_to_upper - Changes the string to uppercase
 * @str: String
 * Return: String uppercase
 **/
char *str_to_upper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_lowercase(str[i]))
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
