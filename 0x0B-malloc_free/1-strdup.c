#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int len;
	int  c;

	if (!str)
		return (NULL);

	len = strlen(str);

	a = malloc(len * sizeof(*a) + 1);
	if (!a)
		return (NULL);

	for (c = 0; c < len; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
