#include "main.h"

/**
 * get_bit - function that returns the value of a given bit at an index
 * @n: the integer to get the binary
 * @index: Is the index to find
 * Return:the value of the bit at index
 * or -1 if error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 0;

	while (n)
	{
		if (counter == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}
		n = n / 2;
		counter++;
	}
	return (-1);
}
