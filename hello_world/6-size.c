#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int il;
	long long int ill;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(il));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(ill));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
