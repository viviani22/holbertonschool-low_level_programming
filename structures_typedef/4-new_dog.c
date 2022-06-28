#include "dog.h"
/**
 * new_dog - called from main
 * @name: string
 * @age: float
 * @owner: string
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *namecp = name, *ownercp = owner;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
		free(my_dog);
	}
	if (my_dog->name == namecp && my_dog->owner == ownercp)
		return (my_dog);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
