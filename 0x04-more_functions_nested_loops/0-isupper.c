#include <stdio.h>

/**
 * _isupper - Check for uppercases of charaters
 *
 * Return: 0 0r 1 for non-uppercases and  uppercase resp.
 *
 */

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
	       result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
