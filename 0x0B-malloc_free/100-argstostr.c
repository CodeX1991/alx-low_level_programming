#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of argument
 * @av: the argument vector
 *
 * Return: pointer to a new string on success otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, num_ch = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			num_ch++;
	}

	new_str = malloc((sizeof(char) * num_ch) + ac + 1);

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k++] = '\n';
	}
	new_str[k++] = '\0';
	return (new_str);
}
