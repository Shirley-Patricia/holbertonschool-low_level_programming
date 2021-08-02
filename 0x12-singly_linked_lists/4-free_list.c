#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - prints the elements of the singly linked list
 * @head: head list
 *
 * Return: nothing.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
