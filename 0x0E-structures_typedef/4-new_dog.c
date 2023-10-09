#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, lenName, lenOwner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (lenName = 0; name[lenName]; lenName++)
		;

	for (lenOwner = 0; owner[lenOwner]; lenOwner++)
		;

	p_dog->name = malloc(lenName + 1);
	p_dog->owner = malloc(lenOwner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < lenName; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < lenOwner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
