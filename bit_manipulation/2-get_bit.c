#include "main.h"
/**
 * get_bit - called from main
 * @n: int
 * @index: position
 * Return: -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n >> index & 1)
		return (1);
	else
		return (0);
	return (-1);
}
