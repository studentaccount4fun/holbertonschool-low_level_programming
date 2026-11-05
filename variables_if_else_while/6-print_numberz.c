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

for (n = '0'; n <= '9'; n++)
  putchar(n);
  putchar('\n');

return (0);
}
