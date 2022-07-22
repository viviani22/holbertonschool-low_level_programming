#include "main.h"
#include <stdlib.h>
/**
 * main - starting point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int flag1, flag2, flag3, flag4, flag5;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	flag1 = open(argv[1], O_RDONLY);
	if (flag1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	flag2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((flag3 = read(flag1, buff, 1024)) > 0)
	{
		if (flag2 == -1 || write(flag2, buff, flag3) != flag3)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(flag1);
			exit(99);
		}
	}
	if (flag3 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	flag4 = close(flag1);
	flag5 = close(flag2);
	if (flag4 == -1 && flag5 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", flag1);
		exit(100);
	}
	return (0);
}
