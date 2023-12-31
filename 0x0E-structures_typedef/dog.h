#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
