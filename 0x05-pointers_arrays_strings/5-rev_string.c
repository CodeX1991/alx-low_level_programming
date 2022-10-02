#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	int i, j;
	char str[1000];

	for (i = 0; s[i] != '\0'; i++)
	{
		*(str + i) = *(s + i);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		i--;
		*(s + i) = *(str + j);
	}
}
