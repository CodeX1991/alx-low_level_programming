#include <stdio.h>

/**
 * main - Prints out alphabets in UPPERCASE
 * Return: Always return 0
 */

int main(void)
{
	char upper_alpha;

	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
	{
		putchar(upper_alpha);
	}
	putchar('\n');

	return (0);
}
