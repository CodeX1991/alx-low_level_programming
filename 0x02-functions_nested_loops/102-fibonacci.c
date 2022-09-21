#include <stdio.h>
/**
 * main - Prints out the first 50 fibonacci sequence
 * Return: Always 0
 */

int main(void)
{
	int fbn1, fbn2, sum, count;
	fbn1 = 1;
	fbn2 = 2;
	sum = 0;

	printf("%d, %d, ", fbn1, fbn2);
	for (count = 0; count < 50; count++)
	{
		sum = fbn1 + fbn2;
		printf("%d, ", sum);

		fbn1 = fbn2;
		fbn2 = sum;
	}
	printf("\n");
	return (0);
}
