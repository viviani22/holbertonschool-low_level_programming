#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int I;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (I = i + 1; I <= '9'; I++)
		{
			for (j = I + 1; j <= '9'; j++)
			{
			putchar (i);
			putchar (I);
			putchar (j);
			if (i < '7')
			{
			putchar (',');
			putchar (' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
