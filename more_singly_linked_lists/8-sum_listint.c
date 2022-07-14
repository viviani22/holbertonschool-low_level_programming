#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - called from main
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
