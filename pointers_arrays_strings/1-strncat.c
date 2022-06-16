#include "main.h"
/**
 * _strcat - called from main
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
		dest[i] = src[j];
		i++;
		}
	}
	return (dest);
}
