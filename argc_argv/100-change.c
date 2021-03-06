#include <stdio.h>
#include <stdlib.h>
/**
 * main - start
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int money, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)
		{
			money = money - 25;
		}
		else if (money >= 10)
		{
			money = money - 10;
		}
		else if (money >= 5)
		{
			money = money - 5;
		}
		else if (money >= 2)
		{
			money = money - 2;
		}
		else if (money >= 1)
		{
			money = money - 1;
		}
		cents += 1;
	}
	printf("%d\n", cents);
	return (0);
}
