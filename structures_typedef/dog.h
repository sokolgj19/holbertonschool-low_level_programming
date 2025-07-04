#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure that stores information about a dog
 * @name: Name of the dog (as a string)
 * @age: Age of the dog (as a float)
 * @owner: Name of the dog's owner (as a string)
 *
 * Description: Defines a struct to hold a dog's name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
