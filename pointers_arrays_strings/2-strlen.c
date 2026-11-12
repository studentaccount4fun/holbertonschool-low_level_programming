#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: This is the string we're using.
 *
 * Return: We return the ineger length.
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')

{
length++;
}
return (length);
}
