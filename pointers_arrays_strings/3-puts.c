#include "main.h"
/**
 * _puts - Called from function
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < 63; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
