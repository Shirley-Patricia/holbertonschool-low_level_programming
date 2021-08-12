#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: head of the list.
 * @index: index of the node
 *
 * Return: nothing.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp;

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
