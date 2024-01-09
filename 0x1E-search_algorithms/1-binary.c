#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the integer to search for
 *
 * Return: the first index where value is located
 * otherwise -1 if value is not present in array or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid = 0, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);

	}
	return (-1);
}
