#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succesful)
 */

int main(void)
{
	long int first_number, second_number, fib_number, sum;
	int i;

	first_number = 1;
	second_number = 2;
	sum = 0;
	for (i = 3; i < 33; ++i)
	{
		fib_number = first_number + second_number;
		first_number = second_number;
		second_number = fib_number;
		if (fib_number % 2 != 0)
		{
			sum = sum + fib_number;
		}
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
