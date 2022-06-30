#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main - start
 * @argc: arg count
 * @argv: arg array
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1])
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
