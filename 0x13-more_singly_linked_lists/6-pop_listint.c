#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - delete the head node of the singly linked list.
 * @head: head of the list.
 *
 * Return: nothing.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (tmp != NULL)
	{
		*head = tmp->next;
		n = tmp->n;
		free(tmp);
		return (n);
	}
	return (0);
}
