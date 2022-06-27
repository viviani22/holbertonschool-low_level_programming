#include "main.h"
/**
 * malloc_checked - called from main
 * @b: unsigned int
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *vp;

	vp = malloc(sizeof(b));
	if (vp == NULL)
	{
		exit(98);
	}
	return (vp);
}
