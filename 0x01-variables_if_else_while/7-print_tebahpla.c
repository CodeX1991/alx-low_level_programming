#include <stdio.h>

/**
 * main - Print out the reverse lowercase of the alphabets
 * Return: Always return 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
