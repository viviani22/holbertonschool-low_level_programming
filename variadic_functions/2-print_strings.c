#include "variadic_functions.h"
/**
 * print_strings - called from main
 * @separator: string
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(p);
	unsigned int i;
	char *x;

	va_start(p, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(p, char*);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
