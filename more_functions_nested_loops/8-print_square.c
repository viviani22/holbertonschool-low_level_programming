#include "main.h"
/**
 * print_square - Called from function
 * @size: int
 * Return: void
 */
void print_square(int size)
{
	int height, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (height = size; height > 0; height--)
	{
		for (width = size; width > 0; width--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
