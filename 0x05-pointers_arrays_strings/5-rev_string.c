#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 *
 * Description: This function reverses the characters in a string.
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0, len;

	len = _strlen(s) - 1;

	while (len > i)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}
}

/**
 * _strlen - Returns the length of a string
 * @s: String
 *
 * Description: This function calculates the length of a string.
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}

	return (inc);
}

/**
 * swap_char - Swaps two characters
 * @a: First character
 * @b: Second character
 *
 * Description: This function swaps the values of two characters.
 * Return: Nothing
 */
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
