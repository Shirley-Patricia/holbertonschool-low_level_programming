#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - free memory of the singly linked list.
 * @head: head of the list.
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
}
