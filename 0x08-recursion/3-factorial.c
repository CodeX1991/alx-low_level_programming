#include "main.h"

/**
 * factorial - Calculate the factorial of a number, n
 * @n: the number to chek the factorial
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
