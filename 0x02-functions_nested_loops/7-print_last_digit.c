#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit if a numbe
 * @num: The number to be computed
 *
 * Return: The last digit
 *
 */

int print_last_digit(int num)
{
	int last_digit;
	num = abs(num);
	last_digit = num % 10;

	return (last_digit);

}
