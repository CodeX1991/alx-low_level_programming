#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to find the sqaure root
 *
 * Return: sqrt otherwise -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_finder(n, 1));
}

/**
 * _sqrt_finder - calculating the sqrt of a number
 * @n: the number to calculate its sqrt
 * @guess: first guest value
 *
 * Return: the sqrt otherwise -1
 */

int _sqrt_finder(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess >= n / 2)
		return (-1);

	guess += 1;
	return (_sqrt_finder(n, guess));
}


