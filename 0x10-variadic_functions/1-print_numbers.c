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
		print_number(va_arg(args, int));

	for (i = 0; i < n; i++)
	{
		print_number(va_arg(args, int));

		if (i != n - 1)
		{
			for (j = 0; separator[j]; j++)
				_putchar(separator[j]);
		}
	}
	va_end(args);
	_putchar('\n');
}



/**
 * print_number - A function that prints integer
 * @n: The given integer
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

