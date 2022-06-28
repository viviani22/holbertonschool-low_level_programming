#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog info
 * @name: string
 * @age: float
 * @owner: string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
