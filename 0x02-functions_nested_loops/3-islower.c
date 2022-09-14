#include "main.h"

/**
 * _islower - This function chacks for lowercase character
 *
 * Return: return 1 for lowercase or 0 otherwise
 * c - It isan automatic variable
 */

int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);

	_putchar('\n');

}
