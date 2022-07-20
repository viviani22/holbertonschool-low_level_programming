#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - called from main
 * @filename: string
 * @letters: size_t
 * Return: struct
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t flag, flag1, flag2;

	if (filename == NULL)
		return (0);
	flag = open(filename, O_RDONLY);
	if (flag == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	flag1 = read(flag, buff, letters);
	if (flag1 == -1)
		return (0);
	flag2 = write(STDOUT_FILENO, buff, flag1);
	if (flag2 == -1)
		return (0);
	free(buff);
	close(flag);

	return (flag1);
}
