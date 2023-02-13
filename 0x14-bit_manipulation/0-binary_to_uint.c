#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer the given string of number
 * Return: the converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		i++;
		len++;
	}
	len = len - 1;
	while (len >= 0)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);
		num = num + (b[len] - '0') * mult;
		len--;
		mult *= 2;
	}
	return (num);
}
