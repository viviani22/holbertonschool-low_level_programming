#include "main.h"
/**
 * rev_string - Called from main
 * @s: char
 * Return: void
 */
void rev_string(char *s)
{
	int i, n, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (n = 0; n < i / 2; n++)
	{
		temp = s[n];
		s[n] = s[i - 1 - n];
		s[i - 1 - n] = temp;
	}
}
