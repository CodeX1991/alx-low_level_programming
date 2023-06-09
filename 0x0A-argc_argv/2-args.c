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
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
		printf("%s", argv[idx]);
		printf("\n");
	}
	return (0);
}
