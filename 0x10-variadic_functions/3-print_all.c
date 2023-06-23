#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the list of types of argument passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";

	f_dt func_arr[] = {
		{"c", print_a_char},
		{"i", print_an_integer},
		{"f", print_a_float},
		{"s", print_a_string}
	};

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *func_arr[j].specifier)
			{
				func_arr[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_a_char - print a character
 * @separator: the separator of the character
 * @args: a list of the variadic argument
 */

void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_an_integer - print an integer
 * @separator: the separator of the character
 * @args: a list of the variadic  argument
 */

void print_an_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_a_float - print a float
 * @separator: the separator of the character
 * @args: a list of the variadic argument
 */

void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_a_string - print a given string
 * @separator: the separator of the string
 * @args: a list of the variadic argument
 */

void print_a_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s%s", separator, str);

}
