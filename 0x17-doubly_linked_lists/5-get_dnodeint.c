#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dobly linked list.
 * @head: head of the list.
 * @index: index of the node
 *
 * Return: nothing.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}