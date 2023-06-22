#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between number
 * @n: the number size to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;

	va_start(args, n);

	if (separator == NULL)
		printf("%d", va_arg(args, int));

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1)
		{
			for (j = 0; separator[j]; j++)
				printf("%c", separator[j]);
		}
	}
	va_end(args);
	printf("\n");
}
