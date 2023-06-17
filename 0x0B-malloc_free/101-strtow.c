#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the given string to split
 *
 * Return: pointer to an array of strings (words) on success
 * otherwise NULL
 */

char **strtow(char *str)
{
	char **str_array;
	int num_of_word, num_of_char, idx, i, k, j = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_of_word = count_word(str);

	if (num_of_word == 0)
		return (NULL);

	str_array = malloc(sizeof(char *) * (num_of_word + 1));
	if (str_array == NULL)
		return (NULL);

	for (i = 0; i < num_of_word; i++)
	{
		while (str[j] == ' ')
			j++;

		num_of_char = word_len(str + j);
		str_array[i] = malloc(sizeof(char) * (num_of_char + 1));

		if (str_array[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(str_array[k]);
			free(str_array);
			return (NULL);
		}

		for (idx = 0; idx < num_of_char; idx++)
			str_array[i][idx] = str[j++];
		str_array[i][j] = '\0';
	}
	str_array[i] = NULL;
	return (str_array);
}
/**
 * word_len - count the character in a word
 * @str: pointer to the beginning of th word
 *
 * Return: the length of the word
 */
int word_len(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		len++;
	return (len);
}

/**
 * count_word - count the number of words in a string
 * @str: pointer to the given string
 *
 * Return: number of word present
 */

int count_word(char *str)
{
	int idx, num_word = 0;

	for (idx = 0; str[idx]; idx++)
	{
		if (str[idx] != ' ')
		{
			num_word++;
			idx += word_len(str + idx);
		}
	}
	return (num_word);
}
