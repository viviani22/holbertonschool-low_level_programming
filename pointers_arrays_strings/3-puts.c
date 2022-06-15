#include "main.h"
/**
 * _puts - Called from function
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i, n, j;

	i = 0;
	n = 0;
	while (str[i] != str['\0'])
	{
		n++;
	}
	for (j = 0; j < n; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
