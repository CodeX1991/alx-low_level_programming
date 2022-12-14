#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog attributes
 * @name: The name of the dpg
 * @age: The age of the dog
 * @owner: Name of the owner of the dog
 *
 * Description: The attributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
