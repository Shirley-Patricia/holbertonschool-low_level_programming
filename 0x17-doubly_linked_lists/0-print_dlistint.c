#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a Doubly linked list.
 * @h: name of the list
 *
 * Return: a integer.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
