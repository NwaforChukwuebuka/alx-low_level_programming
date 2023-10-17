#include "main.h"
#include <string.h>
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
	int len = 0, index = 0;

	len = strlen(s);

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
