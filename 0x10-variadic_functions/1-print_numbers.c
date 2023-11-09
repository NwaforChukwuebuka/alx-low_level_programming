#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers separated using a separator of your choice
 * @separator: symbol to print btw numbers
 * @n: num of args
 * Return: void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list args;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	va_start(args, n);

	if (n > 0)
		printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(args, int));
	printf("\n");
	va_end(args);
}
