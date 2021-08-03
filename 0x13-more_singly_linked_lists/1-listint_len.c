#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - return the elements of the singly linked list
 * @h: name list
 *
 * Return: a value
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
