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
	int name_len, owner_len;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen_recursion(name) + 1;
		owner_len = _strlen_recursion(owner) + 1;

		user = malloc(sizeof(dog_t));

		if (user == NULL)
			return (NULL);

		user->name = malloc(sizeof(int) * name_len);
		if (user->name == NULL)
		{
			free(user);
			return (NULL);
		}

		user->owner = malloc(sizeof(char) * owner_len);
		if (user->owner == NULL)
		{
			free(user->name);
			free(user);
			return (NULL);
		}

		user->name = _strcpy(user->name, name);
		user->owner = _strcpy(user->owner, owner);
		user->age = age;
	}

	return (user);
}


/**
 * _strcpy - A function that copies the string pointed by src
 * including the terminating null byte (\0), to the  buffer
 * pointedd to by dest
 * @dest: pointer to copy to
 * @src: pointer to copy fromm
 *
 * Return: The value of the pointer, dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string to be counted
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
