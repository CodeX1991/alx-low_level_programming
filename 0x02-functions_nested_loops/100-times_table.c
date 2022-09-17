#include "main.h"

/**
 * print_times_table - Prints the n times table, from 0
 * @n: check data
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int num, mult;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		int prod;

		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;
				
				if (prod > 9 && prod < 100)
				{
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod % 100) / 10) + '0');
					_putchar(((prod % 100) % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod % 10) + '0');
				}

			}
			_putchar('\n');
		}
	}
}
