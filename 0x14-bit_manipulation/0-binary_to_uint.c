#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the pointer to the given bianary string
 *
 * Return: converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		len++;
	}

	len = len - 1;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			num += 1 << mult;
		mult++;
		len--;
	}
	return (num);
}
