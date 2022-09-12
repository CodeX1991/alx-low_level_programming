#include <stdio.h>

/**
 * main - Prints out alphabets in UPPERCASE
 * Return: Always return 0
 */

int main(void)
{
	char lower_alpha, upper_alpha;

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
	{
		putchar(lower_alpha);
	}
	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
	{
		putchar(upper_alpha);
	}
	putchar('\n');

	return (0);
}
