#include "main.h"
/**
 * print_line - Gets n from main
 * @n: int
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
