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
	int i, len;
	list_t *new_node;
	char *new_str;

	if (head == NULL || str == NULL)
		return (NULL);
	len = strlen(str);
	new_node = *head;

	new_str = malloc((len + 1) * sizeof(char));

	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
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
