#include "main.h"

/**
 * print_binary - prints the binary form of a given number
 * @n: the given number
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	mask = 1UL << 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i <= 63; i++)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');

		n <<= 1;
	}
}
