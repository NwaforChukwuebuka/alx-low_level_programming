#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int len1;
	int len2;
	int c;
	int d;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
		;

	a = malloc((len1 * sizeof(*s1)) + (len2 * sizeof(*s2)) + 1);
	if (!a)
		return (NULL);

	for (c = 0, d = 0; c < (len1 + len2 + 1); c++)
	{
		if (c < len1)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}

	return (a);
}
