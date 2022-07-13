#include "lists.h"
#include <stdio.h>
/**
 * print_listint - called from main
 * @h: head
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
