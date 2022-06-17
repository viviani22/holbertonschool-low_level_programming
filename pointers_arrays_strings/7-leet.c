#include "main.h"
/**
 * leet - called from main
 * @str: pointer to str
 * Return: pointer to char
 */
char *leet(char *str)
{
	int i, swp;
	char letters[11] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char leet_num[11] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (swp = 0; swp <= 4; swp++)
		{
			if (str[i] == letters[swp])
			{
				str[i] = leet_num[swp];
			}
		}
	}
	return (str);
}
