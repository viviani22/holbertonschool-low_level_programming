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

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		/*if (va_arg(p, char*) == NULL)
			printf("(nil)");*/
		printf("%s", va_arg(p, char*));
		if (i != n - i && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
