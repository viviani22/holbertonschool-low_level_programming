#include "main.h"
/**
 * _atoi - Called from main
 * @s: pointer to char
 * Return: int
 */
int _atoi(char *s)
{
	int i, negative;
	unsigned int result;

	result = 0;
	negative = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] == '-')
		{
			negative = -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result * negative);
}
