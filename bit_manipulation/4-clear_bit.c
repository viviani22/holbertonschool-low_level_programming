#include "main.h"
/**
 * clear_bit - called from main
 * @n: int
 * @index: position
 * Return: -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n >> index & 0)
		return (1);
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
