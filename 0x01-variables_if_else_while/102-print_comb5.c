#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int a, b, d, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (d = 48; d <= 57; d++)
			{
				for (c = 48; c <= 57; c++)
				{
					if (((d + c) > (a + b) &&  d >= a) || a < d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(d);
						putchar(c);

					if (a + b + d + c == 227 && a == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
