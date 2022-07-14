#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - called from main
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
