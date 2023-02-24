#include "main.h"

/**
 * copy_file - a program that copy a file
 * @src: where to copy from
 * @dest: where to copy to
 */
void copy_file(const char *src, const char *dest)
{
	int fd, fd1, fd2, fd3, fd4;
	char buffer[1024];

	fd = open(src, O_RDONLY);
	if (!src || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd1 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	fd2 = read(fd, buffer, 1024);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		 exit(98);
	}

	fd3 = write(fd1, buffer, fd2);
	if (fd3 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	fd4 = close(fd1);
	if (fd4 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd4);
		exit(100);
	}
}

/**
 * main - check code
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}
