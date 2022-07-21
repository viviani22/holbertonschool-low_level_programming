#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - called from main
 * @head: p to p
 * @n: int
 * Return: pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (*head == NULL)
		*head = new;
	else
		new->prev = tmp;
	new->n = n;
	new->next = NULL;
	return (new);
}
