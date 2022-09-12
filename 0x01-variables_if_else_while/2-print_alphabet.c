#include <stdio.h>

/**
 * main - Print to the console the lowercase alphabets from a to z 
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
