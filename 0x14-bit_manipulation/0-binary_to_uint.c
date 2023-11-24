#include "main.h"

/**
 * binary_to_uint - bianry to unsigned int conversion
 * @b: binary
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int i;
	int base_two;

	if(!b)
		return (0);

	uint = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, base_two = 1; i > -1; i--, base_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			uint = uint + base_two;
	}
	return (uint);
}
