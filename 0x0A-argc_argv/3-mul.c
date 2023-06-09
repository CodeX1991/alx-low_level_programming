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
	if (argc == 1)
		printf("Error");
	else
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
	printf("\n");
	return (0);
}
