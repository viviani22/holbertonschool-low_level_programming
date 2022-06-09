#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succesful)
 */

int main(void)
{
	unsigned long first_number, second_number, fib_number;
	int i;

	first_number = 1;
	second_number = 2;
	printf("%lu, %lu", first_number, second_number);
	for (i = 3; i < 101; ++i)
	{
		fib_number = first_number + second_number;
		printf(", %lu", fib_number);
		first_number = second_number;
		second_number = fib_number;
	}
	putchar('\n');
	return (0);
}
