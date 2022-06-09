#include<stdio.h>
/**
 *
 *
 *
 */
void _natural(void)
{
	int a, b, sum, suma, sumb;

	for (a = 3; a < 1024; a++)
	{
		a = a + 2;
		suma = suma + a;
	}

	for (b = 5; b < 1024; b++)
	{
		b = b + 4;
		sumb = sumb + b;
	}

	sum = suma + sumb;
	printf("%d\n", sum);
}
/**
 *
 *
 *
 */
int main(void)
{
	_natural();
	return (0);
}
