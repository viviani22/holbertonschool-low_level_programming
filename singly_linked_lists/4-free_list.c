#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - called from main
 * @head: node
 * Return: int
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
