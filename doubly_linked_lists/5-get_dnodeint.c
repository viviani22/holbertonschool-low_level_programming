#include "lists.h"
/**
 * get_dnodeint_at_index - called from main
 * @head: ptr
 * @index: int
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (head == NULL || (head == NULL && index == 0))
		return (NULL);
	if (i < index)
		return (NULL);
	if (index == 0)
		return (head);
	while (index != 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
