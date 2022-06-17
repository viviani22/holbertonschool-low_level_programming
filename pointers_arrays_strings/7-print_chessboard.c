#include "main.h"
/**
 * print_chessboard - called from main
 * @a: pointer to array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int num, lett;

	for (num = 0; num < 8; num++)
	{
		for (lett = 0; lett < 8; lett++)
		{
			_putchar(a[num][lett]);
		}
		_putchar('\n');
	}
}
