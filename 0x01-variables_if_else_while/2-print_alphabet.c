#include <stdio.h>

/**
 * main - Print out alphabets in lowercase
 * Return: Always return 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
