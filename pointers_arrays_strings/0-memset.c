#include "main.h"
/**
 * _memset - called from main
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
