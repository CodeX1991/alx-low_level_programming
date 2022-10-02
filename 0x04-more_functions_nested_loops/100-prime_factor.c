#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n, num = 612852475143;

	for (n = 3; n < 782849; n = n + 2)
	{
		while ((num % n == 0) && (num != n))
			num = num / n;
	}
	printf("%lu\n", num);

	return (0);
	
}
