#include "main.h"
/**
 * _strspn - called from main
 * @s: pointer to char
 * @accept: pointer to char
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, x;

	x = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				break;
			}
			if (accept[j + 1] == '\0')
			{
				return (x);
			}
		}
	}
	return (x);
}
