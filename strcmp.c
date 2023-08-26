#include "main.h"
/**
 * _strcmp - Compares 2 strings.
 * @str1: String 1
 * @str2: String 2
 * Return: Integer
 **/
int _strcmp(char *str1, char *str2)
{
int i;

for (i = 0; str1[i] != '\0'; i++)
{
if (str1[i] != str2[i])
return (str1[i] - str2[i]);
}

return (0);
}
