#include "main.h"

/**
 * swap_int - Swap the values of tow given integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int a1;
	int b1;

	a1 = *a;
	b1 = *b;

	*a = b1;
	*b = a1;
}
