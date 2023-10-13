#include "main.h"

/**
  * print_line - Draws a straight line according to parameter
  * @num: The number of lines to draw
  *
  * Return: empty
  */
void print_line(int num)
{
	int i;

	if (num <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < num; i++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
