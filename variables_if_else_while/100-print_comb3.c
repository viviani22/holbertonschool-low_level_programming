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

	for (i = '0'; i <= '9'; i++)
	{
		for (I = i + 1; I <= '9'; I++)
		{
			putchar (i);
			putchar (I);
			if (i < '8')
			{
			putchar (',');
			putchar (' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
