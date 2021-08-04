#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - delete the head node of the singly linked list.
 * @head: head of the list.
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
