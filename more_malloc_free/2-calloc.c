#include "main.h"
/**
 * _calloc - called from main
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *vp;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	vp = malloc(nmemb * size);
	if (vp == NULL)
	{
		return (NULL);
	}
	return (vp);
}
