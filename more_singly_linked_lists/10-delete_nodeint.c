#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - called from main
 * @head: head
 * @index: unsigned int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *tmp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
	}
	tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);
	return (1);
}
