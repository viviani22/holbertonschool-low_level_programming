#include "main.h"
/**
 * string_nconcat - called from main
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = sizeof(s1);
	size2 = sizeof(s2);
	if (n >= size2)
	{
		p = malloc(size1 + size2 - 1);
	}
	else
	{
		p = malloc(size1 + n);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1 && s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n && j < size2 && s2[j] != '\0'; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}
