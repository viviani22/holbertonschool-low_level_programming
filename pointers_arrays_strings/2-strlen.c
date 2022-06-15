#include "main.h"
#include <string.h>
/**
 * _strlen - Called from main
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
