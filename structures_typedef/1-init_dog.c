#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - called from main
 * @d: dog id
 * @name: string
 * @age: float
 * @owner: string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		printf("Ok");
	d->name = name;
	d->age = age;
	d->owner = owner;
}
