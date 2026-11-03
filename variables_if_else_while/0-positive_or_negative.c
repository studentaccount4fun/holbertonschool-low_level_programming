#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program randomises the value n and then aims to find it through if else statements.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) {
		printf("is positive %d\n");
	}else if (n == 0) {
		printf("is zero %d\n");
	}else {
		printf("is negative %d\n");
	}
	return (0);
}
