#include "main.h"
/**
 * print_array - Called from main
 * @a: pointer to int
 * @b: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
