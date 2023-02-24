#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the stdout
 * @filename: the file to read from
 * @letters: the number of bytes to write to the stdout
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd1, num_byte;
	char *buffer;

	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	num_byte = read(fd, buffer, letters);
	fd1 = write(STDOUT_FILENO, buffer, num_byte);
	if (fd1 == -1)
		return (0);

	free(buffer);
	close(fd);
	return (num_byte);
}
