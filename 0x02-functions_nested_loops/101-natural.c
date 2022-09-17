#include <stdio.h>

/**
 * main - Prints out the sum of the multples of 3 or below 1024
 *
 * Return: 0
 *
 */

int main(void)
{
	int mult, sum = 0;

	for (mult = 3; mult < 1024; mult++)
	{
		if (mult % 3 == 0 || mult % 5 == 0)
		{
			sum = sum + mult;
		}
	}
	printf("%d\n", sum);
	return (0);
}
