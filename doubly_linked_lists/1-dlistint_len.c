#include "lists.h"
/**
 * dlistint_len - called from main
 * @h: node
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
