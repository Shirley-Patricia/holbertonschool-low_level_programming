#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a Doubly linked list.
 * @head: head of the list
 * @n: integer
 *
 * Return: a integer.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}