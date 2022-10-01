#include "main.h"

/**
 * print_triangle - Prints out a triangle
 * @size: The given size of the triangle
 */
void print_triangle(int size)
{
	int i, sp;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (sp = 1; sp <= size; sp++)
			{
				if (sp <= size - i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
