#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char I;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (I = 'A'; I <= 'Z'; I++)
	{
		putchar(I);
	}
	putchar('\n');
	return (0);
}
