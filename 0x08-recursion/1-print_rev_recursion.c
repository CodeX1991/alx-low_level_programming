#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse
 * @s: Pointer to the last character
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
