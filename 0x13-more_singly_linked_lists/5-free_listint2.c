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
	listint_t *aux;

	if (head == NULL)
	{}
	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
}
