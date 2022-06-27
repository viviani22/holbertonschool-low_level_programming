#include "main.h"
/**
 * array_range - called from main
 * @min: int
 * @max: int
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
