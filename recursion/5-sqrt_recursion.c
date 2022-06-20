#include "main.h"
/**
 * _sqrt_recursion - called from main
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_find_sqrt(n, 1));
}
/**
 * _find_sqrt - called from _sqrt_recursion
 * @n: int
 * @i: iteration
 * Return: n
 */
int _find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n || i == n / 2)
	{
		return (-1);
	}
	return (_find_sqrt(n, i + 1));
}
