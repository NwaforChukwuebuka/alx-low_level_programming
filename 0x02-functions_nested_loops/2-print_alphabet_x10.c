#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i, letter = 0;

	for (i = 0; i <= 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
