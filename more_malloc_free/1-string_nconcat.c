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
	unsigned int i, j, size1 = sizeof(s1) + 1, size2 = sizeof(s2) + 1;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > size2)
	{
		n = size2 + 1;
	}
	p = malloc((size1 + n) * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		p[j + i] = s2[j];
	}
	p[j + i] = '\0';
	return (p);
}
