#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print number to the stdout
 * @separator: The seperator of the numbers
 * @n: the count of the number to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list first_arg;

	va_start(first_arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(first_arg, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s ", separator);
		}

	}
	printf("\n");

	va_end(first_arg);
}
