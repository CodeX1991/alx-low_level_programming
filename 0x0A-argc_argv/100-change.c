#include <stdio.h>
#include <stdlib.h>

/**
 * change - get change
 * @cents: Amount of coins from main function
 *
 * Return: change
 */
int change(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		while (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		while (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		while (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		while (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		while (cents >= 1)
		{
			cents -= 1;
			coins++;
		}
	}
	return (coins);
}

/**
 * main - check the code
 * @argc: count of the arguments
 * @argv: Array pointing to argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}
	printf("%d\n", change(atoi(argv[1])));
	return (0);
}
