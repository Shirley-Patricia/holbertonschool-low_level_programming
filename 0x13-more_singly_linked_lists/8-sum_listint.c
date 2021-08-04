#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - sum of all the data of the singly linked list.
 * @head: head of the list.
 *
 * Return: nothing.
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (0);
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
