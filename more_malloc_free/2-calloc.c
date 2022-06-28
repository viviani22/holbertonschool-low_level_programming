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
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	vp = malloc(nmemb * size);
	if (vp == NULL)
	{
		return (NULL);
	}
	while (i < size * nmemb)
	{
		((char *)vp)[i] = 0;
		i++;
	}
	return (vp);
}
