#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int I;
	int j;
	int J;

	for (i = '0'; i <= '9'; i++)
	{
		for (I = '0'; I <= '8'; I++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				for (J = I + 1; J <= '9'; J++)
				{
					putchar(i);
					putchar(I);
					putchar(' ');
					putchar(j);
					putchar(J);
					if ((i != '9' || I != '8') || (j != '9' || J != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
