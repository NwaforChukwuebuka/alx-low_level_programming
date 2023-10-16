#include <stdio.h>

/**
 * swap_int - swaps 2 integers
 * @a: The integer to be swapped with b
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
