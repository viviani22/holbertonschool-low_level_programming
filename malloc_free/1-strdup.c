#include "main.h"
/**
 * _strdup - called from main
 * @str: pointer to char
 * Return: char
 */
char *_strdup(char *str)
{
	char *ar;
	int length, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
	{
	}
	ar = malloc(length * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
