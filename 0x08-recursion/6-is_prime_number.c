#include "main.h"

/**
 * is_prime_number - A function that check if n given number is a prime number
 * @n: the given number
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check fot prime numbers
 * @n: the number to be checked
 * @i: The interation times
 *
 * Return: 1 if it is a prime number or 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
