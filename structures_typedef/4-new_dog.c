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
	int i = 0, namel = 0, ownerl = 0;

	while (name[namel] != '\0')
		namel++;
	while (owner[ownerl] != '\0')
		ownerl++;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = malloc(namel + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(ownerl + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	while (name[i] != '\0')
	{
		my_dog->name[i] = name[i];
		i++;
	}
	my_dog->age = age;
	i = 0;
	while (owner[i] != '\0')
	{
		my_dog->owner[i] = owner[i];
		i++;
	}
	return (my_dog);
}
