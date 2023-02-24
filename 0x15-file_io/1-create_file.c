#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the file to create
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd1;

	if (filename == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		fd1 = write(fd, text_content, _strlen(text_content));
		if (fd1 == -1)
			return (-1);
	}
	if (text_content == NULL)
	{
		fd1 = write(fd, text_content, 0);
		if (fd1 == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - a program that count the length of string
 * @s: a pointer to the counted string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
