#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the given file
 * @text_content: the content to populate the file to created
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	n = write(fd, text_content, _strlen_recursion(text_content));
	if (n == -1)
		return (-1);

	close(fd);
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string to be counted
 *
 * Return: the length of the string
 */

size_t _strlen_recursion(char *s)
{

	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
