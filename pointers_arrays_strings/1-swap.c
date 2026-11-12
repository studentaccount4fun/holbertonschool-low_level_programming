#include "main.h"
#include <stdio.h>

/**
 * swap_int - this swaps two values
 * @a: - this is the first integer to be swapped
 * @b: - this is the second integer to be swapped
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
