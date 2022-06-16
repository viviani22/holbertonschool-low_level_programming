#include "main.h"
/**
 * _strncpy - Called from main
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
		dest[j] = src[i];
		j++;
		}
	}
	return (dest);
}
