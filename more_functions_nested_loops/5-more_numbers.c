#include "main.h"
/**
 * more_numbers - Called from main
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int row;

	for (row = 0; row < 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		printf("\n");
	}
}
