#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * @array: pointer to the array to be searched
 * @size: the array size
 * @cmp: the function pointer to be used
 *
 * Return: the index of the first elem for which the cmp functions does
 * not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int res, i = 0;
	int index = -1;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			res = cmp(array[i]);
			if (res != 0)
			{
				index = i;
				return (index);
			}
			i++;
		}
	}
	return (index);
}
