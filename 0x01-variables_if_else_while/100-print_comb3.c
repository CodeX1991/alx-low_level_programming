#include <stdio.h>

/**
 * main - Prints out all possible different combinations
 * of two digits that are entire different
 * Return: value is 0
 */

int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 <= 9; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 <= 9; num_2++)
		{
			putchar(num_1 + '0');
			putchar(num_2 + '0');
			if (num_1 == 8 && num_2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

