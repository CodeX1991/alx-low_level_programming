#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: The pointer to the array
 */
void puts_half(char *str)
{
	int i, n, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	n = (len - 1) / 2;

	for (i = n + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
