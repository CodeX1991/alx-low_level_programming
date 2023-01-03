#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: pointer to the substring
 * @accept: pointer to the substring
 *
 * Return: the number of bytes in the segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (!(s[i] == accept[j]))
			break;
	}

	return (counter);
}
