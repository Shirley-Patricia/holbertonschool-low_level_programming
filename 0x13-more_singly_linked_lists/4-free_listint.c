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
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
