#include <stdio.h>

/**
 * main - Prints all argumeent it receives
 * @argc: The number of argument
 * @argv: The array of the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
