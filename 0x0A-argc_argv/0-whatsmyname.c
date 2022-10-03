#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program prints the name of the programm: ./mynameis
 * @argc: The count argument
 * @argv: The pointer to the array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
