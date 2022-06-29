#include "function_pointers.h"
/**
 * int_index - called from function
 * @array: array of int
 * @size: int
 * @cmp: pointer to functions
 * Return: index if successful, -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
