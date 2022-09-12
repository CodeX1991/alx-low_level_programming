#include <stdio.h>

/**
 * main - Print out all the numbers of base 16 in lowercase
 * Return: Always return 0
 */
int main(void)
{
	char num, alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
