#include "main.h"
/**
 * str_concat - called from main
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int size1, size2, i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}
	ar = malloc((size1 + size2) * sizeof(char) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	return (ar);
}
