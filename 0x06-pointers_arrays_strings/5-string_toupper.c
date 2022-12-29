#include "main.h"

/**
 * string_toupper - Convert lower letters to upper
 * @p: A pointer to the string array
 *
 * Return: the pointer to the array
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
			p[i] -= 32;
	}

	return (p);

}
