#include<stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Succesful)
 */

int main(void)
{
	unsigned long first_number, second_number, fib_number;
	unsigned long first_placeholder1, first_placeholder2;
	unsigned long second_placeholder1, second_placeholder2;
	unsigned long fib_placeholder1, fib_placeholder2;
	unsigned long a_billion;
	int i;

	first_number = 1;
	second_number = 2;
	a_billion = 1000000000;
	printf("%lu, %lu", first_number, second_number);
	for (i = 3; i < 92; ++i)
	{
		fib_number = first_number + second_number;
		printf(", %lu", fib_number);
		first_number = second_number;
		second_number = fib_number;
	}

	first_placeholder1 = (first_number / a_billion);
	first_placeholder2 = (first_number % a_billion);
	second_placeholder1 = (second_number / a_billion);
	second_placeholder2 = (second_number % a_billion);
	fib_placeholder1 = (fib_number / a_billion);
	fib_placeholder2 = (fib_number / a_billion);

	for (i = 93; i < 101; ++i)
	{
		fib_placeholder1 = first_placeholder1 + second_placeholder1;
		fib_placeholder2 = first_placeholder2 + second_placeholder2;
		printf(", %lu", fib_placeholder1 + (fib_placeholder2 / a_billion));
		printf("%lu", fib_placeholder2 % a_billion);
		first_placeholder1 = second_placeholder1;
		second_placeholder1 = fib_placeholder1;
		first_placeholder1 = second_placeholder2;
		second_placeholder2 = fib_placeholder2;
	}
	putchar('\n');
	return (0);
}
