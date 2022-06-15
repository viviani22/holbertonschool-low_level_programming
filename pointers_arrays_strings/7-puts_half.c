#include "main.h"
/**
 * puts_half - Called from main
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, half, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 1)
	{
		half = (i + 1) / 2;
	}
	else
	{
		half = i / 2;
	}
	for (j = half; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
