#include "function_pointers.h"
/**
 * array_iterator - called from main
 * @array: pointer to int
 * @size: size bit
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(15);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
