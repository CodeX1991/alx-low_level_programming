#include <stdio.h>
/**
 * main - Prints out the first 50 fibonacci sequence
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fbn1, fbn2, sum;
	
	fbn1 = 0;
	fbn2 = 1;

	for (count = 0; count < 50; count++)
	{
		sum = fbn1 + fbn2;
		printf("%lu", sum);

		fbn1 = fbn2;
		fbn2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
