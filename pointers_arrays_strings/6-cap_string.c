#include "main.h"
/**
 * cap_string - called from main
 * @str: pointer to char
 * Return: pointer to char
 */
char *cap_string(char *str)
{
	int i, j;
	char spt[13] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		for (j = 0; spt[j] != '\0'; j++)
		{
			if (str[i] == spt[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
