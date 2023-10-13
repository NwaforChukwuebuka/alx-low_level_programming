#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */
void print_triangle(int size)
{
	int p, q, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < size; p++)
		{
			for (q = size - p; q > 1; q--)
			{
				_putchar(32);
			}

			for (r = 0; r <= p; r++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
