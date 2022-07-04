#include "variadic_functions.h"
/**
 * sum_them_all - called from main
 * @n: int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, unsigned int);
	}
	va_end(p);
	return (sum);
}
