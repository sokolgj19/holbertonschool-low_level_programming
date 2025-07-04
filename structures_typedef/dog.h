#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct that describes a dog
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The name of the owner (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */