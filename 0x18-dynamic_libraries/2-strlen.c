#include "main.h"
#include <stdio.h>

/**
 * _strlen - gts the strength length
 * @s: the input string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
