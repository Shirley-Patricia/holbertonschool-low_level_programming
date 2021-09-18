#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all data of a doubly linked list.
 * @head: head of the list.
 *
 * Return: nothing.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
