#include "main.h"
/**
 * binary_to_uint - called from main
 * @b: string
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0, current = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
	}
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			uint += current;
		}
		current = current * 2;
		i--;
	}
	return (uint);
}
