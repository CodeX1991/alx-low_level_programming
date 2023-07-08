#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: the number string to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");

		if (str != NULL)
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
		{
			for (j = 0; separator[j]; j++)
				printf("%c", separator[j]);
		}
	}
	va_end(args);
	printf("\n");
}