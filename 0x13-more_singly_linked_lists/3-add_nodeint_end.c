#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - return the elements of the singly linked list
 * @head: head list
 * @n: new integer
 *
 * Return: a value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return(new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (new);
}