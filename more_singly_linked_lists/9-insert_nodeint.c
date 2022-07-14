#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - called from main
 * @head: head
 * @idx: unsigned int
 * @n: int
 * Return: node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new;
	unsigned int i;

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = ptr;
		ptr = new;
		return (ptr);
	}
	for (i = 1; i <= idx - 1 && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	if ((i - 1) != idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = ptr->next;
	ptr->next = new;
	return (ptr);
}
