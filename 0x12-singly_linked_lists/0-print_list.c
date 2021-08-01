#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints the elements of the singly linked list
 * @h: name list
 * 
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else 
	printf("%s, %d, %p,", h->str, h->len, h->&next);
	return (h);
}
