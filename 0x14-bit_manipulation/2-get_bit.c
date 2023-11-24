#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: bit value in the index.
 * Return: the value of the bit at index index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n >>= 1;
	}
	return (n & 1);

}
