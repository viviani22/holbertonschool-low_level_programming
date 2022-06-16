#include "main.h"
/**
 * reverse_array - called from main
 * @a: pointer to int
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
