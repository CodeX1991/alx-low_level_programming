#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with 1 and 2
 * Return: 0;
 */

int main(void)
{
	unsigned long fbn1 = 0, fbn2 = 1, sum;
	int count;

	for (count = 0; count < 98; count++)
	{
		sum = fbn1 + fbn2;
		printf("%lu, ", sum);

		fbn1 = fbn2;
		fbn2 = sum;
	}
	printf("\n");
	return (0);
}
