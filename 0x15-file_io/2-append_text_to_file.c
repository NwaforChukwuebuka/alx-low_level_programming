#include <stddef.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
/**
 * append_text_to_file - creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: name of the file
 * @text_content: text to input into file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len, inlen;
	char *p;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	for (inlen = 0, p = text_content; *p; p++)
		inlen++;
	len = write(file, text_content, inlen);

	if (close(file) == -1 || inlen != len)
		return (-1);
	return (len);
}
