#include "main.h"

/**
 * buffer - function saves a character ina buffer
 * @c: Char
 *
 * Return: 1
 **/
int buffer(char c)
{
static char buffering[1024];
static int integer;

if (c == -1 || integer == 1024)
{
write(1, buffering, integer);
integer = 0;
}

if (c != -1)
buffering[integer++] = c;

return (1);
}
