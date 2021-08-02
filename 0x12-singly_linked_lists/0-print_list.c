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
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
