#include "main.h"

/**
 * print_rev - Prints a string in revise order
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; ++i)
		len += 1;
	for (j = len - 1; j >= 0; --j)
		_putchar(s[j]);
	_putchar('\n');
}
