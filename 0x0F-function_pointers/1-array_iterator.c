#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element of an array
 * @size: the size of the array
 * @array: pointer to the array
 * @action: a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL && size > 0)
	{
		unsigned int index = 0;

		while (index < size)
		{
			action(*array);
			array++;
			index++;
		}
	}
}
