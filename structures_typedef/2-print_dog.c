#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the content of a struct dog
 * @d: Pointer to the struct dog
 *
 * Description: If d is NULL, the function does nothing.
 * If any field is NULL, prints "(nil)" for that field.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
