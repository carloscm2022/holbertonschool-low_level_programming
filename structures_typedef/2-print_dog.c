#include "dog.h"

/**
 * print_dog - print the attributes of a dog
 *
 * @d: A dog
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");

	if (d->age >= 0)
		printf("Age: %f\n", d->age);

	(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
