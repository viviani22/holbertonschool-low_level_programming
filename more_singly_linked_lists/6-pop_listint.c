#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - called from main
 * @head: head
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (data);
}
