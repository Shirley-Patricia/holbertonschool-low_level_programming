#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - return the elements of the singly linked list
 * @head: head list
 * @n: new integer
 *
 * Return: a value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
