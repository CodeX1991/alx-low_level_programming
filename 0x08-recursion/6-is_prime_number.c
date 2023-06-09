#include "main.h"

/**
 * is_prime_number - 1 otherwise 0
 * @n: the number to check its prime
 *
 * Return: 1 if it is a prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_number(n, n / 2));
}

/**
 * prime_number - check if a number is a prime number
 * @n: the number to check
 * @idx: the iterator
 *
 * Return: 1 if n is prime otherwise 0
 */

int prime_number(int n, int idx)
{
	if (idx == 1)
		return (1);
	if (n % idx == 0)
		return (0);
	return (prime_number(n, idx - 1));
}
