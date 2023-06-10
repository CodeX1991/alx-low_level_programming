#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints it name
 * @argc: the length of argument passed to the terminal
 * @argv: array of pointer to char
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 2)
	{
	}
	for (i = 1; i < argc; i++)
	{
		char *s = argv[i];
		int j = 0;

		while (s[j] != '\0')
		{
			if (s[j] >= '0' && s[j] <= '9')
				j++;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
