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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = ptr;
		ptr = new;
		return (new);
	}
	for (i = 1; i <= idx - 1; i++)
	{
		if (ptr == NULL || ptr->next == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
