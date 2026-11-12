#include "main.h"
/**
 * _puts - What I'm doing is printing a string that goes to stdout using _puts.
 *@str - this is the string itself.
 *
 * return: Always 0
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
