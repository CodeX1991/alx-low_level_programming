#include "main.h"

/**
 * puts2 - This function prints every other character of a string,
 * starting with the first
 * @str: string to print from
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
