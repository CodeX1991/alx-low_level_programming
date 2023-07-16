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
	ssize_t w, r;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	if (r != (ssize_t)letters)
		w = write(2, buffer, r);
	if (r < (ssize_t)letters)
		w = write(1, buffer, r);

	if ((fd == -1) | (r == -1) | (w == -1) | (w != r))
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (w);
}
