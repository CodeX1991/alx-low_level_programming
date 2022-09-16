#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The given data to start count from
 * Return: void
 *
 */

void print_to_98(int n)
{
	if ( n > 98)
	{
		int a;

		for (a = n; a >= 97; a--)
		{
			printf("%d, ", a);
		}
		printf("%d\n", 98);
		
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		int b;

		for (b = n; b <= 97; b++)
		{
			printf("%d, ", b);
		}
		printf("%d\n", 98);
	}
}
