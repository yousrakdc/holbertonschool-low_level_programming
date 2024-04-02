#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int _strlen(const char *s);

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head
 * @str: string to duplicate
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr;
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	curr = *head;

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new_node;

	return (*head);
}

/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
