#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		i++;
		_putchar('\n');
	}
}
