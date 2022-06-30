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
	int i, namel = 0, ownerl = 0;

	while (name[namel])
		namel++;
	while (owner[ownerl])
		ownerl++;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = malloc((sizeof(char) * namel) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc((sizeof(char) * ownerl) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		my_dog->name[i] = name[i];
	}
	my_dog->name[i] = '\0';
	my_dog->age = age;
	for (i = 0; owner[i]; i++)
	{
		my_dog->owner[i] = owner[i];
	}
	my_dog->owner[i] = '\0';
	return (my_dog);
}
