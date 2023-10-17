#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
	char letter;
	int i;

	srand(time(0));
	while (i <= 2645)
	{
		letter = rand() % 128;
		i += letter;
		putchar(letter);
	}
	putchar(2772 - i);
	return (0);
}
