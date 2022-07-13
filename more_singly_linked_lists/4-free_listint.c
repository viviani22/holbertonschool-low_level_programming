#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - called from main
 * @head: head
 */
void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
}
