#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: the length of the argument
 * @argv: the array of argc argument
 *
 * Return: 1 if argc is not 1 or o if argument less than zero
 */

int main(int argc, char *argv[])
{
	int coin_notes = 0, cent;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
	}
	while (cent > 0)
	{
		coin_notes++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", coin_notes);
	return (0);
}
