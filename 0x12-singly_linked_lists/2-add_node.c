#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - prints the elements of the singly linked list
 * @head: name list
 * @str: string
 *
 * Description: singly linked list node structure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int lon = 0;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	while (str[lon])
	{
		lon++;
	}
	new_node->len = lon;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
