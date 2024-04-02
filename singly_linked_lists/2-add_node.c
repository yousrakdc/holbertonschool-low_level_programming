#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: pointer to the head
 * @str: string to duplicate
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	while (head == NULL && str == NULL)
	{
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);

		if (new_str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->len = strlen(str);
		new_node->next = *head;

		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
