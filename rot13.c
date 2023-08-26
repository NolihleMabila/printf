#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * Return: String encoded
 */
int rot13(char *s)
{
int i, k;
char *n, *rot13;
n = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; n[k] != '\0'; k++)
{
if (s[i] == n[k])
{
printchar(rot13[k]);
break;
}
}

if (!n[k])
{
printchar(s[i]);
}
}
return (i);
}
