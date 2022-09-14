#include "main.h"

/**
 * print_sign - This program prints the sign of a number.
 *
 * Return: 1 for number greater than 0
 * 0 for number equals 0
 * -1 for number less than 0
 *
 */

int print_sign(int n)
{
	int result;
	char sign;

	if (n > 0)
	{
		sign = '+';
		result = 1;
	}
	else if (n == 0)
	{
		sign = '0';
		result = 0;
	}
	else
	{
		sign = '-';
		result = -1;
	}
	_putchar(sign);
	return (result);
	_putchar('\n');
}

