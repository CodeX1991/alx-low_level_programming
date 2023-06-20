#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the newly created struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;

	user = malloc(sizeof(dog_t));

	if (user == NULL)
		return (NULL);
	user->name = name;
	user->age = age;
	user->owner = owner;

	return (user);
}
