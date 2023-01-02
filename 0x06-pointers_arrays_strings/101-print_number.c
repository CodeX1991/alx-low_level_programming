#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: The given integer
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	if (n >= 0 && n < 10)
	{

	}
	else if (n < 100)
	{
		_putchar((n / 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar((((n % 1000) % 100) / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
