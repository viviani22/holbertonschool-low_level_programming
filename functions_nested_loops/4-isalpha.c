#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The character to print
 *
 * Return: If letter, return 1.
 * Otherwise, 0 is returned.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
