#include "main.h"

/**
 * print_diagonal - Draws a diohonal line on the terminal
 * @n: Check data
 *
 */
void print_diagonal(int n)
{
	int count, space;
	char slash = '\\';

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			for (space = 0; space < count; space++)
				_putchar(' ');
			_putchar(slash);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
