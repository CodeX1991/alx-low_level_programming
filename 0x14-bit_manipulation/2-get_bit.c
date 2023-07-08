#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number given
 * @index: the index to look at
 *
 * Return: the value of the bit index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_status;

	if (n != 0)
	{
		bit_status = (n >> index) & 1;
		return (bit_status);
	}
	return (-1);
}
