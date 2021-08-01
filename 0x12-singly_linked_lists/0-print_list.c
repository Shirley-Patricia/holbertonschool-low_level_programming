#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints the elements of the singly linked list
 * @h: name list
 *
 * Return: a value
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	int count;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	printf("[%d] %s\n", h->len, h->str);

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
