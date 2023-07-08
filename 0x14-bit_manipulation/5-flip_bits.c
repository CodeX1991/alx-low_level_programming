#include "main.h"

/**
 * flip_bits -  flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bit(n ^ m));
}

/**
 * count_set_bit - count set bit
 * @n: the number to count its bit
 *
 * Return: the count
 */

unsigned int count_set_bit(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
