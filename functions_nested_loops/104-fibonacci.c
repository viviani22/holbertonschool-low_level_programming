#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succesful)
 */

int main(void)
{
	unsigned long first_number, second_number, fib_number;
	unsigned long billion_divider, first_placeholder1, first_placeholder2, second_placeholder1, second_placeholder2;
	int i;

	first_number = 1;
	second_number = 2;
	billion_divider = 1000000000;
	printf("%lu, %lu", first_number, second_number);
	for (i = 3; i < 92; ++i)
	{
		fib_number = first_number + second_number;
		printf(", %lu", fib_number);
		first_number = second_number;
		second_number = fib_number;
	}

	first_placeholder1 = (first_number / billion_divider);
	first_placeholder2 = (first_number % billion_divider);
	second_placeholder1 = (second_number / billion_divider);
	second_placeholder2 = (second_number % billion_divider);

	for (i = 94; i <101; ++i)
	{
		printf(", %lu", second_placeholder1 + (second_placeholder2 / billion_divider));
		printf("%lu", second_placeholder2 % billion_divider);
		second_placeholder1 += first_placeholder1;
		first_placeholder1 = second_placeholder1 - first_placeholder1;
		second_placeholder2 += first_placeholder2;
		first_placeholder2 = second_placeholder2 - first_placeholder2;
	}
	putchar('\n');
	return (0);
}
