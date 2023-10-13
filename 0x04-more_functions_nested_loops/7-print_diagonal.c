#include "main.h"

/**
  * print_diagonal - Draws a diagonal lines according parameter
  * @num: The number of times to print diagonal lines
  *
  * Return: empty
  */
void print_diagonal(int num)
{
	int i, j;

	if (num <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < num; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
