#include "main.h"
/**
 * factorial - called from main
 * @n: pointer to int
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	n = n * factorial(n - 1);

	return (n);
}
