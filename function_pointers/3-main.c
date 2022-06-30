#include "3-calc.h"
/**
 * main - start
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
	/**
	result = (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	if (result == NULL)
	{
		printf("Error\n");
		return (99);
	}
	*/
	printf("%d\n", (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
