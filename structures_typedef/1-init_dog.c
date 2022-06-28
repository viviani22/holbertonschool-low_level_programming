#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - called from main
 * @d: dog id
 * @name: string
 * @age: float
 * @owner: string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	printf("%s\n %f\n %s\n", name, age, owner);
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
