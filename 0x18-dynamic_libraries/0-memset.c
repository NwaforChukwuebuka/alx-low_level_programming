#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: pointer to memory area to be filled
 * @n: number of bytes to be filled
 * @b: the byte to be filled
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
