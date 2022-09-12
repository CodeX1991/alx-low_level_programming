#include <stdio.h>

/**
 * main - Prints all possible combination of 3 digits
 * Return: Always 0
 */

int main(void)
{
	int n_1, n_2, n_3;

	for (n_1 = 0; n_1 <= 7; n_1++)
	{
		for (n_2 = n_1 + 1; n_2 <= 8; n_2++)
		{
			for (n_3 = n_2 + 1; n_3 <= 9; n_3++)
			{
				putchar(n_1 + '0');
				putchar(n_2 + '0');
				putchar(n_3 + '0');

				if (n_1 == 7 && n_2 == 8 && n_3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
