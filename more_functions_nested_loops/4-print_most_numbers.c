#include "main.h"
/**
 * print_most_numbers - called from main
 *
 * Return: prints numbers 0 to 9 expect 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
