#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the given number
 */

void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n >= 1)
		_print_rev_recursion(n);
}

/**
 * _print_rev_recursion - prints a in reverse
 * @n: pointer the giving number to be converted
 */

void _print_rev_recursion(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	_print_rev_recursion(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
