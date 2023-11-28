#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * printclass - prints the class from an elf header
 *
 * @h: header information
 *
 * Return: void
 */
void printclass(char *h)
{
	printf("  %-35s", "Class:");
	if (h[4] == 2)
		printf("ELF64\n");
	else if (h[4] == 1)
		printf("ELF32\n");
	else
		printf("<unknown: %02hx>", h[4]);
}

/**
 * printdata - prints the information about data organization
 * from the elf header
 *
 * @h: header information
 *
 * Return: void
 */
void printdata(char *h)
{
	printf("  %-35s", "Data:");
	if (h[5] == 1)
		printf("2's complement, little endian\n");
	else if (h[5] == 2)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %02hx>", h[5]);
}

/**
 * printversion - prints version info from elf header
 *
 * @h: header information
 *
 * Return: void
 */
void printversion(char *h)
{
	printf("  %-35s", "Version:");
	if (h[6] <= EV_CURRENT)
	{
		printf("%d", h[6]);
		if (h[6] == EV_CURRENT)
			printf(" (current)\n");
		else
			printf("\n");
	}
	else
	{
		printf("49 <unknown %%lx>");
	}
}

/**
 * printabi - prints abi version from header information
 *
 * @h: header information
 *
 * Return: void
 */
void printabi(char *h)
{
	printf("  %-35s", "OS/ABI:");
	if (h[7] == 0)
		printf("UNIX - System V\n");
	else if (h[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (h[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (h[7] == 3)
		printf("UNIX - Linux\n");
	else if (h[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (h[7] == 6)
		printf("UNIX - Solaris\n");
	else if (h[7] == 7)
		printf("UNIX - AIX\n");
	else if (h[7] == 8)
		printf("UNIX - IRIX\n");
	else if (h[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (h[7] == 10)
		printf("UNIX - Tru64\n");
	else if (h[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (h[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (h[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (h[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (h[7] == 15)
		printf("UNIX - AROS\n");
	else if (h[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (h[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02x>\n", h[7]);
	printf("  %-35s%d\n", "ABI Version:", h[8]);
}

/**
 * printtype - prints elf filetype from header info
 *
 * @h: header information
 *
 * Return: void
 */
void printtype(char *h)
{
	int index;

	if (h[5] == 1)
		index = 16;
	else
		index = 17;
	printf("  %-35s", "Type:");
	if (h[index] == 1)
		printf("REL (Relocatable file)\n");
	else if (h[index] == 2)
		printf("EXEC (Executable file)\n");
	else if (h[index] == 3)
		printf("DYN (Shared object file)\n");
	else if (h[index] == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown>: %02x%02x\n", h[16], h[17]);
}

/**
 * printentry - prints entry address of executable from header
 *
 * @h: header information
 *
 * Return: void
 */
void printentry(char *h)
{
	int i, end;

	printf("  %-35s0x", "Entry point address:");
	if (h[4] == 2)
		end = 0x1f;
	else
		end = 0x1b;
	if (h[5] == 1)
	{
		i = end;
		while (h[i] == 0 && i > 0x18)
			i--;
		printf("%x", h[i--]);
		while (i >= 0x18)
			printf("%02x", (unsigned char) h[i--]);
		printf("\n");
	}
	else
	{
		i = 0x18;
		while (h[i] == 0)
			i++;
		printf("%x", h[i++]);
		while (i <= end)
			printf("%02x", (unsigned char) h[i++]);
		printf("\n");
	}
}

/**
 * main - parses an elf header file
 *
 * @ac: num of args
 * @av: arugment strings
 *
 * Return: 0 on success
 * 1 on incorrect arg num
 * 2 on file open failure
 * 3 on read failure
 * 4 on failure to read enough bytes for a 32 bit file
 * 98 if elf magic is not matched
 */
int main(int ac, char *av[])
{
	int ifile, i;
	char h[32];

	if (ac != 2)
		return (1);
	ifile = open(av[1], O_RDONLY);
	if (ifile == -1)
		return (1);
	i = read(ifile, h, 32);
	if (i == -1)
		return (1);
	if (i < 28)
		return (1);
	if (h[0] != 0x7f || h[1] != 'E' || h[2] != 'L' || h[3] != 'F')
	{
		dprintf(STDERR_FILENO,
			"readelf: Error: hellofile: Failed to read file header\n");
		return (98);
	}
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x ", (unsigned int) h[i]);
	printf("\n");
	printclass(h);
	printdata(h);
	printversion(h);
	printabi(h);
	printtype(h);
	printentry(h);
	return (0);
}
