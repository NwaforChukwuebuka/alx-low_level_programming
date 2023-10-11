#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, i, multi;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');

				multi = num * i;

				if (multi <= 99)
					_putchar(' ');
				if (multi <= 9)
					_putchar(' ');

				if (multi >= 100)
				{
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10)) % 10 + '0');
				}
				else if (multi <= 99 && multi >= 10)
				{
					_putchar((multi / 10) + '0');
				}
				_putchar((multi % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
