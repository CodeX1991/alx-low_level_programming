#include <stdio.h>

/**
 * main - A program that finds and print the sum
 * of the even-valued terms.
 * Return: 0
 */

int main(void)
{
	unsigned long fbn1 = 0, fbn2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fbn1 + fbn2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum = total_sum + sum;


		fbn1 = fbn2;
		fbn2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}

