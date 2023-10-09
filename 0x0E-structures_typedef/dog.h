#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that stores some information of a dog.
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog owner
 *
 * Decription: This structure contains dogs information
 * stores its name, its age and the name of its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
