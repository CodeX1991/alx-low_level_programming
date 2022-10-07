#include "main.h"

/**
 * print_number - A function that prints integer
 * @n: The given integer
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
	}
	else if (n > 9 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar(((n % 100) % 10) + '0');
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar((((n % 1000) % 100) / 10) + '0');
		_putchar((((n % 1000) % 100) % 10) + '0');
	}
}
