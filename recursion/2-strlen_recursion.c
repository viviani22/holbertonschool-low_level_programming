#include "main.h"
/**
 * _strlen_recursion - called from main
 * @s: pointer to char
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (*s);
}
