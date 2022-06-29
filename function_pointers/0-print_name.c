#include "function_pointers.h"
/**
 * print_name - called from main
 * @name: string
 * f - pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
