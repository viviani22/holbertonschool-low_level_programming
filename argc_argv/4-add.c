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
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);

	return (0);
}
