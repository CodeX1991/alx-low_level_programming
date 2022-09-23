#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * for multiples of five print Buzz and 
 * for numbers which are multiples of both 3 and 5 print FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
