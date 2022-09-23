#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 */
void print_square(int size)
{
	if (size > 0)
	{
		int counter1, counter2;

		for (counter1 = 1; counter1 <= size; counter1++)
		{
			for (counter2 = 1; counter2 <= size; counter2++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
