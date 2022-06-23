#include "main.h"
/**
 * create_array - called from main
 * @size: unsigned int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	ar[0] = c;
	return (ar);
}
