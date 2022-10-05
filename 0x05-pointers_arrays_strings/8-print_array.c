#include "main.h"
#include <stdio.h>

/**
 * print_array - A function thar prints n elements of array of integers
 * @a: An array of n value
 * @n: Count of the element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
