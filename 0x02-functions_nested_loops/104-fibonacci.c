#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with 1 and 2
 * Return: 0;
 */

int main(void)
{
	unsigned long fbn1 = 0, fbn2 = 1, sum;
	unsigned long fbn1_half1, fbn1_half2, fbn2_half1, fbn2_half2;
	unsigned long half1, half2;
	int count;

	for (count = 0; count < 92; count++)
	{
		sum = fbn1 + fbn2;
		printf("%lu, ", sum);

		fbn1 = fbn2;
		fbn2 = sum;
	}
	fbn1_half1 = fbn1 / 10000000000;
	fbn2_half1 = fbn2 / 10000000000;
	fbn1_half2 = fbn1 % 10000000000;
	fbn2_half2 = fbn2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fbn1_half1 + fbn2_half1;
		half2 = fbn1_half2 + fbn2_half2;
		if (fbn1_half2 + fbn2_half2 > 9999999999)
		{
			half1 = half1 + 1;
			half2 = half2 % 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fbn1_half1 = fbn2_half1;
		fbn1_half2 = fbn2_half2;
		fbn2_half1 = half1;
		fbn2_half2 = half2;
	}
	printf("\n");
	return (0);
}
