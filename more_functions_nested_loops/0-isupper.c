#include "main.h"
/**
 * _isupper - Takes value c
 * @c: Value taken by main
 * Return: 1 for upper, 0 otherwise
 */
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
	return (1);
}
else
	return (0);
}
