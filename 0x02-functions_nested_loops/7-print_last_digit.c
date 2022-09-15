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
	int last_digit, abs_last_digit;

	last_digit = n % 10;
	abs_last_digit = _abs(last_digit);

	_putchar(abs_last_digit + '0');
	return (abs_last_digit);
}
