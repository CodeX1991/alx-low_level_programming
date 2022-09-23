#include "main.h"

/**
 * print_line - Draws a straight line  in the terminal
 * @n: The number of times the character _ should be printed
 *
 */
void print_line(int n)
{
	int count;
	char underscore = '_';

	for (count = 1; count <= n; count++)
	{
		if (n > 0)
			_putchar(underscore);
	}
	_putchar('\n');
}
