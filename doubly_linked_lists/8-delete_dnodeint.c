#include "lists.h"
/**
 * delete_dnodeint_at_index - called from main
 * @head: ptr to starting node
 * @index: node to be deleted
 * Return: 1 if successful, 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *tmp2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (tmp->next != NULL)
		{
			tmp = tmp->next;
			tmp->prev = NULL;
		}
		free(*head);
		*head = tmp;
		return (1);
	}
	while (index != 0 && tmp->next != NULL)
	{
		tmp = tmp->next;
		index--;
	}
	tmp2 = tmp->prev;
	if (tmp->next == NULL)
	{
		tmp2->next = NULL;
		tmp->prev = NULL;
		free(tmp);
	}
	else
	{
		tmp2->next = tmp->next;
		tmp2 = tmp2->next;
		tmp2->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
