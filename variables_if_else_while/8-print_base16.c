#include <stdio.h>

/**
 * main - This prints numbers and letters
 * Return: Always 0 (Success).
 */
int main(void)
{
int n;
int x;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}

for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}

putchar('\n');
return (0);
}


