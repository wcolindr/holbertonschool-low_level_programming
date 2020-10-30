#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add node is the end
 *
 * @head: list_t is head
 *
 * @str: char is str
 *
 * Return: address of each element
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;

	list_t *new_node = malloc(sizeof(list_t));

	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
