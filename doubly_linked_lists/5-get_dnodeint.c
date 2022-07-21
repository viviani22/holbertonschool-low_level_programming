#include "lists.h"
/**
 * get_dnodeint_at_index - called from main
 * @head: ptr
 * @index: int
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
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
