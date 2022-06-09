#include<stdio.h>
/**
 * main - 
 *
 * Return: Always 0
 */

int main(void)
{
	long int first_number, second_number, fib_number;
	int i;

	first_number = 0;
	second_number = 1;
	printf ("%ld, %ld", first_number, second_number);
	for (i = 2; i < 50; ++i)
	{
		fib_number = first_number + second_number;
		printf(", %ld", fib_number);
		first_number = second_number;
		second_number = fib_number;
	}
	putchar('\n');
	return (0);
}
