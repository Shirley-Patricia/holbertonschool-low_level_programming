#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free memory of a Doubly linked list.
 * @head: head of the list
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