#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a structure of a dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: defining the structure of dog which tells the
 * features of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen_recursion(char *s);

#endif
