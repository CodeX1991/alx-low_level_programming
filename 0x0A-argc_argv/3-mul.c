#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two given numbers
 * @argc: The number count
 * @argv: The array of the given count value
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
