#include "main.h"

/**
 * _isupper - This function check for the cases of character
 *
 * Return: 1 for uppercase and 0 for lowercase
 *
 */

int _isupper(int c)
{
	int display;

	if (c >= 'A' && c <= 'Z')
	{
		display = 1;
	}
	else
	{
		display = 0;
	}

	return (display);
}
