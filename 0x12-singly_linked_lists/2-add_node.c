#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - insert a node in the beginning
 *
 * @head: list_t is head
 *
 * @str: char is str
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int count = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
