#include "main.h"

/**
 * _isdigit - Checks for a digit between 0 and 9
 *
 * @c: The entering to be checked
 *
 * Return: 0 for a digit or 1 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
