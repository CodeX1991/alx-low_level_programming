#include <stdio.h>

/**
 * positive_or_negative - This function check if i is negative or positive
 *
 * @i: The data to be checked
 *
 * Return: void
 *
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
