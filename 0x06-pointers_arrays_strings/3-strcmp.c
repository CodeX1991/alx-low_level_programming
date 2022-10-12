#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if the string are equal
 * a negative value if s1<s2
 * Positive value if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if ((s1[i] - '0') == (s2[i] - '0'))
		{
			result = 0;
		}
		else if ((s1[i] - '0') > (s2[i] - '0'))
		{
			result = (s1[i] - '0') - (s2[i] - '0');
			break;
		}
		else
		{
			result = (s1[i] - '0') - (s2[i] - '0');
			break;
		}

	}

	return (result);
}
