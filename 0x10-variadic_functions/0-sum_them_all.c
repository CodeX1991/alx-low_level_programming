#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum up the given numbers
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameter to calculate the sum of
 *
 * Return: 0 if n == 0; otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list first_arg;

	va_start(first_arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(first_arg, int);
	}

	va_end(first_arg);

	return (sum);
}
