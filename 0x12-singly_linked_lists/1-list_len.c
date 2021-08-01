#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - prints the elements of the singly linked list
 * @h: name list
 *
 * Return: a value
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	int count;

	temp = h;
    count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return (count);
}
