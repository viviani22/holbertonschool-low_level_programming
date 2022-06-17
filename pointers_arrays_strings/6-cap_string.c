#include "main.h"
/**
 * cap_string - called from main
 * @s: pointer to char
 * Return: pointer to char
 */
char *cap_string(char *str)
{
	int i, j;
	char spt[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		while (j <= 12)
		{
			if (str[i] == spt[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
			j++;
		}
	}
	return (str);
}
