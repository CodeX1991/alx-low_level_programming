#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: the address of the number
 * @index: the index to manipulate
 *
 * Return: 1 if it works or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
