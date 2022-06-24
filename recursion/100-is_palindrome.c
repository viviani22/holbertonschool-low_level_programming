#include "main.h"
/**
 * is_palindrome - called from main
 * @s: int
 * Return: int
 */
int is_palindrome(char *s)
{
	int length = palindrome_length(s);
	int i = 0;

	if (!*s)
	{
		return (1);
	}
	return (check_is_palindrome(s, length, i));
}
/**
 * palindrome_length - called from is_palindrome
 * @s: string
 * Return: length
 */
int palindrome_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + palindrome_length(s + 1));
	}
}
/**
 * check_is_palindrome - called from is_palindrome
 * @s: string
 * @length: int
 * @i: instance
 * Return: 1 if succesful, 0 if not
 */
int check_is_palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
	{
		return (1);
	}
	if (s[i] == s[length - i - 1])
	{
		return (check_is_palindrome(s, length, i + 1));
	}
	return (0);
}
