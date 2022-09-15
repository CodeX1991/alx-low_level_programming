#include "main.h"

/**
 * times_table - Prints the 9 timestable, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int num1, num2, result;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			result = num1 * num2;
			
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				if (num2 == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else if (result == 0 || result <= 9)
			{
				_putchar(' ');
				_putchar(result + '0');
				if (num2 == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
