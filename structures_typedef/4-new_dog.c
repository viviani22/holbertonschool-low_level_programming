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
	char *cpname, *cpowner;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = malloc(sizeof(name));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(owner));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	cpname = name;
	cpowner = owner;
	my_dog->name = cpname;
	my_dog->age = age;
	my_dog->owner = cpowner;
	return (my_dog);
}
