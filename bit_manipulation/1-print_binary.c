#include "main.h"
/**
 * print_binary - called from main
 * @n: int
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int current, bit = 1;

	while (n)
	{
		if (n > bit)
			i++;
		bit = bit * 2;
		if (n < bit)
			break;
	}
	if (i != 0)
		i--;
	while (i >= 0)
	{
		current = n >> i;
		if (current & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
