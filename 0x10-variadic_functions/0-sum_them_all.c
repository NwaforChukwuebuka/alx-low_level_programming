#include <stdio.h>
#include "variadic_functions.h"


/**
 * sum_them_all - sum all the variable args of theis variadic function
 * @n: num of args to be supplied
 * return: sum of all the args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	sum = 0;

	va_start(args, n);

	if ( n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int); 
	}

	va_end(args);
	return (sum);
}
