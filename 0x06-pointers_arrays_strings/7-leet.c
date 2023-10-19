#include "main.h"

#include <stdio.h>

/**
 * leet - Encode a string into "1337".
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	char *original = "aAeEoOtTlL";
	char *leet_replacements = "44370171";
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; original[j]; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (s);
}
