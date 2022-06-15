#include "main.h"
/**
 * puts_half - Called from main
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, half;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (half = (i - 1) / 2; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
