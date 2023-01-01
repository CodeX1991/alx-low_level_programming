#include "main.h"
/**
 * leet - A function that encodes a string into 1337
 * @t: pointer to the first element of the array
 *
 * Return: an encoded string
 */

char *leet(char *t)
{
	int i, j;
	char str[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (t[i] == str[j] || t[i] - 32 == str[j])
				t[i] = num[j];
		}
	}

	return (t);
}
