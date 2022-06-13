#include<stdio.h>
#include<math.h>
/**
 * main - Entry point
 *
 * Return: 0 Succesful
 */
int main(void)
{
	unsigned long number, i;

	number = 612852475143;
	if (number % 2 == 0)
	{
		number = number / 2;
	}

	for (i = 3; i <= number; i = i + 2)
	{
		while (number % i == 0)
		{
			number = number / i;
		}
	}
	printf("%lu\n", i);
	return (0);
}
