#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free memory of the singly linked list.
 * @head: head of the list.
 *
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
