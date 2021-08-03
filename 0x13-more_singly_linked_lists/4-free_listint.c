#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - free memory of the singly linked list.
 * @head: head of the list.
 *
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
