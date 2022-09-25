#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in revise order
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); s[i] >= 0; --i)
		_putchar(s[i]);
	_putchar('\n');
}
