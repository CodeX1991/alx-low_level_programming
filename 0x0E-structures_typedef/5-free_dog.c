#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  function that free a dog memory
 * @d: the dog memory
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
