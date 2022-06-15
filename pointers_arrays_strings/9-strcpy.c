#include "main.h"
/**
 * *_strcpy - called from main
 * @dest: pointer to char
 * @src: pointer to chr
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
