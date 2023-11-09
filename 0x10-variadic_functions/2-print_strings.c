#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints string arguments with a separator
 *
 * @separator: - thing to print between strings
 * @n: - number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *sep;
	unsigned int i;
	char *ptr;

	va_start(args, n);

	if (separator == NULL || separator == 0)
		sep = " ";
	else
		sep = (char *)separator;

	if (n > 0)
		printf("%s", va_arg(args, char *));

	for (i = 1; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr == NULL)
			ptr = "(nil)";

		printf("%s%s", sep, ptr);
	}

	printf("\n");

	va_end(args);
}
