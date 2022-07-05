#include "variadic_functions.h"
/**
 * print_all - called from main
 * @format: string
 * @struct Format:
 */
void print_all(const char * const format, ...)
{
	va_list p;
	char *sep = "";
	int i = 0, j;
	struct format Format[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(p, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(Format[j].type)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			Format[j].f(p);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
/**
 * print_c - called from print_all
 * @p: variadic variable
 */
void print_c(va_list p)
{
	char c = va_arg(p, int);

	printf("%c", c);
}
/**
 * print_i - called from print_all
 * @p: variadic variable
 */
void print_i(va_list p)
{
	int i = va_arg(p, int);

	printf("%d", i);
}
/**
 * print_f - called from print_all
 * @p: variadic variable
 */
void print_f(va_list p)
{
	double f = va_arg(p, double);

	printf("%f", f);
}
/**
 * print_s - called from print_all
 * @p: variadic variable
 */
void print_s(va_list p)
{
	char *str = va_arg(p, char*);

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}
