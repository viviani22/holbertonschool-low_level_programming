#include "main.h"
/**
 * set_bit - called from main
 * @n: int
 * @index: position
 * Return: -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n >> index & 1)
		return (1);
	*n = *n | (1 << index);
	return (1);
	return (-1);
}
