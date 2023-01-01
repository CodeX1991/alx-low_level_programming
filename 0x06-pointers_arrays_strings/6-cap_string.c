#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: pointer to the first element of the array
 *
 * Return: the string of the capitalize words
 */

char *cap_string(char *s)
{
	int i, j;
	char p[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (i == 0 && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;
			else if ((s[i - 1] == p[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;
		}
	}

	return (s);
}
