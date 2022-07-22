#include "lists.h"
/**
 * insert_dnodeint_at_index - called from main
 * @h: node
 * @idx: int
 * @n: int
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		if (tmp == NULL)
			new->next = NULL;
		else
			new->next = tmp;
		tmp->prev = new;
		*h = new;
		return (*h);
	}
	while (idx != 1 && tmp != NULL)
	{
		tmp = tmp->next;
		idx--;
	}
	if (idx == 1 && tmp == NULL)
		return (NULL);
	new->prev = tmp;
	if (tmp->next->next != NULL)
		new->next = tmp->next;
	else
		new->next = NULL;
	tmp->next = new;
	return (new);
}
