#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - number of elements of a Doubly linked list.
 * @h: name of the list
 *
 * Return: a integer.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
