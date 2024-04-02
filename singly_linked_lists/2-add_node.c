#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _strlen(const char *s);
/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: pointer to the head
 * @str: string to duplicate
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *new_str;
	list_t *new_node;

	if (str == NULL || head == NULL)
		return (NULL);

	len = _strlen(str);

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
