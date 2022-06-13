#include<stdio.h>
#include<math.h>
/**
 * main - Entry point
 *
 * Return: 0 Succesful
 */
int main(void)
{
	int i;
	long number = 612852475143;

	if (number % 2 == 0)
	{
		number = number / 2;
	}

	for(i = 3; i <= sqrt(number); i = i+2)
	{
		while (number % i == 0)
		{
			number = number / i; 
		}
	}
	printf("%d\n", i);
	return (0);
}
