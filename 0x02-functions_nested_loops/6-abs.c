#include "main.h"

/**
 * _abs - Calculate the absolute value of a number.
 * @i: The entering data tobe checked
 *
 * Return: Always 0
 */

int _abs(int i)
{
	int result;

	if (i > 0)
	{
		result = i;
	}
	else if (i == 0)
	{
		result = 0;
	}
	else
	{
		result = i * -1;
	}
	return (result);
	_putchar('\n');

}

