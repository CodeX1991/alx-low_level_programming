#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: the given string to be return as integer
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10) + (s[i] - '0');
		}
	}
	num *= sign;
	return (num);
}
