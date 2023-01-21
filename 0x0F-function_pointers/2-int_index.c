#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - a function that searches for an integer
 * @array: pointer to the given array
 * @size: the size of the array
 * @cmp: the pointer to the function
 *
 * Return: first index of the element for which
 * the cmp function does not return 0
 * -1 if no element maches return
 * -1 if size is lesser than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (index < size)
	{
		if (cmp(array[index]) != 0)
			return (index);
		index++;
	}
	return (-1);
}
