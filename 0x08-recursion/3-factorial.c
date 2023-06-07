#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given number to calculate its factorial
 *
 * Return: -1 if n is lower than 0 otherwise the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
