#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: to write from
 * @letters: number of char to write
 *
 * Return: letters on success, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
		return (0);
	n = read(fd, buffer, letters);

	write(1, buffer, n);
	free(buffer);
	close(fd);

	return (n);
}
