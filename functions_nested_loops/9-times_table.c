#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: void (Succesful) | Prints multiplication table
 */
void times_table(void)
{
	int column, row, prod;

	for (column = 0; column < 10; column++)
	{
		for (row = 0; row < 10; row++)
		{
			prod = row * column;
			if (prod < 10)
			{
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (row < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod < 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
