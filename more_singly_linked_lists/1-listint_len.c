#include "lists.h"
#include <stdio.h>
/**
 * listint_len - called from main
 * @h: head
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
