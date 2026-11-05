#include <stdio.h>

/**
* main - This prints the numbers in base 10
*
* Return: Always 0 (Success).
*/
int main(void)
{
int n;
n = 0;

while (n < 10)
{
printf("%d", n);
n++;
}
putchar('\n');
return (0);
}
