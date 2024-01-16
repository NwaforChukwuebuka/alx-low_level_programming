#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtraction (a - b).
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of division (a / b).
 */
int div(int a, int b)
{
	if (b == 0)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the remainder of division.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of division (a % b).
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		return (0);
	}
	return (a % b);
}
