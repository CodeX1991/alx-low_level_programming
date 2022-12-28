#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: The pointer to the address of the first element of the array
 * @n: the size of the array
 */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
