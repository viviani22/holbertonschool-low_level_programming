#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - called from main
 * @head: head
 * @index: unsigned int
 * Return: node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i;

	if (index == 0)
		return (ptr);
	for (i = 1; i <= index && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	if ((i - 1) != index)
		return (NULL);
	return (ptr);
}
