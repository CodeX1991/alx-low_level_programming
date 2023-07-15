#include "main.h"

/**
 * main - entry code
 * @argc: the argument count
 * @argv: the argument variable
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}


/**
 * copy_file - copy the content of one file to another
 * @src: pointer to the file to copy from
 * @dest: pointer to the file to copy to
 */

void copy_file(const char *src, const char *dest)
{
	int src_fd, dest_fd, rd;
	char buffer[1024];

	src_fd = open(src, O_RDONLY);
	if (!src || src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	dest_fd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((rd = read(src_fd, buffer, 1024)) > 0)
	{
		if (write(dest_fd, buffer, rd) != rd || dest_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}
