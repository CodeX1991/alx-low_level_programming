#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: Pointer to the first character in the given string to print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
