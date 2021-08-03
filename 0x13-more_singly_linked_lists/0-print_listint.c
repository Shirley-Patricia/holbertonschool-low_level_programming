#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints the elements of the singly linked list
 * @h: name list
 *
 * Return: a value
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		count++;
		h = h->next;
	}
	return (count);
}
