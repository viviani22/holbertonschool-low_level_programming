#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list p);
void print_i(va_list p);
void print_f(va_list p);
void print_s(va_list p);
/**
 * struct format - struct
 * @type: string
 * @f: function
 */
typedef struct format
{
	char *type;
	void (*f)(va_list);
} format_v;
#endif
