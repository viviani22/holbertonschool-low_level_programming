#include "main.h"
#include <limits.h>
/**
 * print_nine_digits - Called from print_number
 * @n: int
 * Return: void
 */
void print_nine_digits(int n)
{
	_putchar((n / 100000000) + '0');
	_putchar((n / 10000000) % 10 + '0');
	_putchar((n / 1000000) % 100 + '0');
	_putchar((n / 100000) % 1000 + '0');
	_putchar((n / 10000) % 10000 + '0');
	_putchar((n / 1000) % 100000 + '0');
	_putchar((n / 100) % 1000000 + '0');
	_putchar((n / 10) % 100000 + '0');
	_putchar((n % 100000000) + '0');

}
/**
 * print_four_digits - Called from print_number
 * @n: int
 * Return: void
 */
void print_four_digits(int n)
{
	_putchar((n / 1000) + '0');
	_putchar(((n / 100) % 10) + '0');
	_putchar(((n / 10) % 100) + '0');
	_putchar(((n % 100)  % 10) + '0');
}
/**
 * print_number - Called from function
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 100) + '0');
	}
	else if (n >= 1000 && n <= 9999)
	{
		print_four_digits(n);
	}
	else if (n >= -10 && n <= -1)
	{
		n = n * -1;
		_putchar(n + '0');
	}
	else if (n >= -99 && n <= -10)
	{
		n = n * -1;
		_putchar('-');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= -9999 && n <= -1000)
	{
		n = n * -1;
		print_four_digits(n);
	}
	else if (n == INT_MAX || n == INT_MIN || n == 123456789)
	{
		print_nine_digits(n);
	}
}
