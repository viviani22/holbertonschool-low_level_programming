#include "main.h"
/**
 * _strchr - called from main
 * @s: pointer to char
 * @c: char
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
