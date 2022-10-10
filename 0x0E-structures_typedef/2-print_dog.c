#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints out the attributes of a dog
 * print (nil) when the attribute is empty
 * for entire empty attributes, print nothing
 * @d: The variable holdin the attributes
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %.6f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
