#include "dog.h"
/**
 * free_dog - called from main
 * @d: pointer to struct
 */
void free_dog(dog_t *d)
{
	free(d);
}
