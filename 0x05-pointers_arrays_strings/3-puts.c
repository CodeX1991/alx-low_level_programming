#include "main.h"

/**
 * _puts - This function prints a string to stdout.
 * @str: The string to print to stdout
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	_putchar('\n');
}
