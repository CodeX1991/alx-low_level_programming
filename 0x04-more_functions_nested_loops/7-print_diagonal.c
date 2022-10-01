#include "main.h"

/**
 * print_diagonal - Draws a diohonal line on the terminal
 * @n: Check data
 *
 */
void print_diagonal(int n)
{
	int count, space;

	if (n > 0)
	{
		for (count = 0; count <= n - 1; count++)
		{
			for (space = 0; space <= count; space++)
			{
				if (count >= 0)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
