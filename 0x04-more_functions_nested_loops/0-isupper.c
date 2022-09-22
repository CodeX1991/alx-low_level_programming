#include "main.h"

/**
 * _isupper - Check for uppercases of charaters
 *
 * Return: 0 0r 1 for non-uppercases and  uppercase resp.
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	       return (1);
	}
	else
	{
		return (0);
	}
}
