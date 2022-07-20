#include "main.h"
/**
 * flip_bits - called from main
 * @n: int
 * @m: int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int icurrent, jcurrent;
	unsigned int diff = 0, bit = 1;
	int i = 0, j = 0;

	while (n)
	{
		if (n > bit)
			i++;
		bit = bit * 2;
		if (n < bit)
			break;
	}
	bit = 1;
	while (m)
	{
		if (m > bit)
			j++;
		bit = bit * 2;
		if (m < bit)
			break;
	}
	if (i != 0)
		i--;
	if (j != 0)
		j--;
	if (n > 1 && n < 9)
		i++;
	if (m > 1 && m < 9)
		j++;
	while (i >= 0 || j >= 0)
	{
		icurrent = n >> i;
		jcurrent = m >> i;
		if ((icurrent ^ jcurrent) & 1)
			diff++;
		i--;
		j--;
	}
	return (diff);
}
