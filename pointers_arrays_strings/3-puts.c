#include "main.h"
/**
 * _puts - Called from function
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
