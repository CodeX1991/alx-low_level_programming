#include "main.h"

/**
 * _isalpha - This function checks for alphabet character.
 * @c: is either lowercase or uppercase alphabet
 *
 * Return: i if c is a letter or 0 if otherwise
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	};

	return (result);
	_putchar('\n');
}
