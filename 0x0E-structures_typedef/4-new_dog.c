#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - return the len of a string
 * @str: pointer to the given strin to calculate its length
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcpy - A function that copy the string into another variable
 * @dest: a pointer to the destination to copy to
 * @src: a pointer to the destination to copy from
 * Return: a pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
/**
 * new_dog - a function that creates a new dog
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: Pointer to the owner of the dog
 * Return: NULL if it fails
 * otherwise the pointer to the new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age <= 0 || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));

	if  (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * _strlen(name) + 1);

	if (doggie->name  == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	doggie->name = _strcpy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcpy(doggie->owner, owner);

	return (doggie);
}
