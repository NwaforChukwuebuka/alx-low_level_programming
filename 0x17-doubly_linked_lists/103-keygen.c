#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Generates pass for the ./crackme5.
 * @argc: The number of args 
 * @argv: Array of ptrs to the args.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *keygen;
	int len = strlen(argv[1]), i, temp;

	keygen = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	pass[0] = keygen[temp];

	temp = 0;
	i = 0;
	while (i < len)
	{
		temp += argv[1][i];
		i++;
	}
	pass[1] = keygen[(temp ^ 79) & 63];

	temp = 1;
	i = 0;
	while (i < len)
	{
		temp *= argv[1][i];
		i++;
}
	pass[2] = keygen[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	pass[3] = keygen[rand() & 63];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	pass[4] = keygen[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	pass[5] = keygen[(temp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
