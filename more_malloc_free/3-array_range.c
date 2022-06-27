#include "main.h"
/**
 * array_range - called from main
 * @min: int
 * @max: int
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int *p, size;

	if (min > max)
	{
		return (NULL);
	}
	for (size = min; size <= max; size++)
	{
	}
	p = malloc(sizeof(int) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (size = min; size <= max; size++)
	{
		p[size] = size;
	}
	return (p);
}
