#include <stdio.h>

/**
 * main - Prints the number of argument passed into it
 * @argc: The variable that holds the count
 * @argv: The array that holds the argument values
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
