#include "main.h"
/**
 * _strcat - called from main
 * @dest: pointer to char
 * @src: pointer to char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
