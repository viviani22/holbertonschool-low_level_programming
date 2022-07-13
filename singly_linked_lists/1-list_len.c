#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - called from main
 * @h: node
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
