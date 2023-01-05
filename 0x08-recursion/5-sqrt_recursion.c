#include "main.h"

/**
 * _sqrt - check for a perfect root
 * @n: the number to find the square root
 * @i: the number of interation
 * Return: natural square root or -1 otherwise
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n >= 1 && i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural square root of n
 * @n: ths number to check  the square root
 *
 * Return: The natural root or -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
