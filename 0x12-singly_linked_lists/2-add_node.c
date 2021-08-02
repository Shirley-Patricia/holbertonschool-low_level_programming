#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a node at the beginning of the linked list
 * @str: text string
 * @head: head of the list
 *
 * Return: Always 0.
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
