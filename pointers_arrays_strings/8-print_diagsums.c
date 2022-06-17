#include "main.h"
/**
 * print_diagsums - called from main
 * @a: pointer to array
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * (size + 1)];
	}
	j = size - 1;
	while (j < size * size - 1)
	{
		if (j == size * size)
		{
			sum2 = sum2 + a[j - 1];
		}
		else
		{
			sum2 = sum2 + a[j];
		}
		j = j + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
