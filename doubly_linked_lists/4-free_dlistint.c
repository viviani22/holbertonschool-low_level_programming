#include "lists.h"
/**
 * free_dlistint - called from main
 * @head: struct
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
