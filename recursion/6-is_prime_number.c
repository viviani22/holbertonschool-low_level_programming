#include "main.h"
/**
 * is_prime_number - called from main
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
/**
 * is_prime - called from is_prime_number
 * @n: int
 * @i: int
 * Return: int
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0 + is_prime(n, i + 1));
	}
}
