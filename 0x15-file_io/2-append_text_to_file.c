#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file to append to
 * @text_content: the string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
		if (filename)
			return (1);
		else
			return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Count the chracter in a string
 * @s: pointer to the string
 * Return: the count
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
