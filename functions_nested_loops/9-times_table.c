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
			if (row == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
