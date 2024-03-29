#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: the first argument and the number of argument to be added
 *
 * Return: sum of the numbers
 * otherwise 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);

	return (sum);
}
