#include "main.h"
/**
 * print_most_number - 
 *
 * Return: prints numbers 0 to 9 expect 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
