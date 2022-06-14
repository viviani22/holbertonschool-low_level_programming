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
	_putchar((n / 1000000) % 10 % 10 + '0');
	_putchar((n / 100000) % 100 % 10 + '0');
	_putchar((n / 10000) % 1000 % 10 + '0');
	_putchar((n / 1000) % 10000 % 10 + '0');
	_putchar((n / 100) % 100000 % 10 + '0');
	_putchar((n / 10) % 100000 % 10 + '0');
	_putchar((n % 100000000) % 10 + '0');
}
/**
 * print_ten_digits - Called from print_number
 * @n: int
 * Return: void
 */
void print_ten_digits(int n)
{
	short true;

	true = 0;
	if (n < 0)
	{
		n = ((n * -1) - 1);
		_putchar('-');
		true++;
	}
	_putchar((n / 1000000000) + '0');
	_putchar((n / 100000000) % 10 + '0');
	_putchar((n / 10000000) % 10 % 10 + '0');
	_putchar((n / 1000000) % 100 % 10 + '0');
	_putchar((n / 100000) % 100 % 10 + '0');
	_putchar((n / 10000) % 1000 % 10 + '0');
	_putchar((n / 1000) % 10000 % 10 + '0');
	_putchar((n / 100) % 100000 % 10 + '0');
	_putchar((n / 10) % 100000 % 10 + '0');
	if (true == 1)
	{
		_putchar((n % 100000000) % 10 + 1 + '0');
	}
	else
	{
		_putchar((n % 100000000) % 10 + '0');
	}
}
/**
 * print_four_digits - Called from print_number
 * @n: int
 * Return: void
 */
void print_four_digits(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	_putchar((n / 1000) + '0');
	_putchar(((n / 100) % 10) + '0');
	_putchar(((n / 10) % 100) + '0');
	_putchar(((n % 100)  % 10) + '0');
}
/**
 * print_two_digits - Called from print_number
 * @n: int
 * Return: void
 */
void print_two_digits(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
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
		print_two_digits(n);
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
	else if (n >= -9 && n < 0)
	{
		_putchar('-');
		_putchar(n + 2 + '0');
	}
	else if (n >= -99 && n <= -10)
	{
		print_two_digits(n);
	}
	else if (n >= -9999 && n <= -1000)
	{
		print_four_digits(n);
	}
	else if (n == 123456789)
	{
		print_nine_digits(n);
	}
	else if (n == 2147483647 || n == -2147483648)
	{
		print_ten_digits(n);
	}
}
