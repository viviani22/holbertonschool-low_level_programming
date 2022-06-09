#include<stdio.h>
/**
 * _natural - Entry point
 *
 * Return: void
 */
void _natural(void)
{
	int a, sum;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
}
/**
 * main - calls _natural
 *
 * Return: Always 0;
 */
int main(void)
{
	_natural();
	return (0);
}
