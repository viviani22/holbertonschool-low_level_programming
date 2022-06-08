#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 *
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	n++;
	}
}
