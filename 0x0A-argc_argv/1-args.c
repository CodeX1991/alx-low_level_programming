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
	(void)argv;
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}

