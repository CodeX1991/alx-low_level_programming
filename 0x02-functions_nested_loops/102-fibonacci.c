#include <stdio.h>
/**
 * main - Prints out the first 50 fibonacci sequence
 * Return: Always 0
 */

int main(void)
{
	unsigned long fbn1, fbn2, sum;
       	int count;

	fbn1 = 1;
	fbn2 = 2;

	printf("%lu, %lu, ", fbn1, fbn2);
	for (count = 0; count < 48; count++)
	{
		sum = fbn1 + fbn2;
		printf("%lu, ", sum);

		fbn1 = fbn2;
		fbn2 = sum;
	}
	printf("\n");
	return (0);
}
