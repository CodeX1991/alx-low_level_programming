#include "main.h"

/**
 * is_prime_number - A function that check if n given number is a prime number
 * @n: the given number
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int status = 1, i;

	if (n == 0 || n == 1 || n == -1)
		status = 0;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			status = 0;
	}

	return (status);
}
