#include "main.h"
#include <stdlib.h>
/**
 * create_file - called from main
 * @filename: string
 * @text_content: size_t
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int flag, flag1, length;

	if (text_content != NULL)
		for (length = 0; text_content[length] != '\0'; length++)
		{
		}
	if (filename == NULL)
		return (-1);
	flag = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (flag == -1)
		return (-1);
	flag1 = write(flag, text_content, length);
	if (flag1 == -1)
		return (-1);
	close(flag);
	return (1);
}
