#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - called from main
 * @head: p to p
 * @n: int
 * Return: pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
