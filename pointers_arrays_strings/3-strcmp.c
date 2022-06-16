#include "main.h"
/**
 * strcmp - called from main
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s2[i] != '\0' && s2[i] != s1[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			res = 0;
		}
		else
		{
			i++;
		}
	}
	return (res);
}
