#include "dog.h"
/**
 * print_dog - called from main
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
