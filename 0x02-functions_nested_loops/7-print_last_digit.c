#include "main.h"

/**
 * print_last_digit - The function prints out the last digit of n
 *
 * @n: The given data to be checked.
 *
 * Return: Value of the last digit
 *
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
	{
		last_digit = n % 10;
	}
	else if (n == 0)
	{
		last_digit = 0;
	}
	else
	{
		last_digit = (n % 10) * -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
