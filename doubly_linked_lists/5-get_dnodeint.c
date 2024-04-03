#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head
 * @index: index of the node we want
 * Return: index is the index of the node, starting from 0
 * if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *current = head;

	while (current != NULL && n < index)
	{
		current = current->next;
		n++;
	}

	if (current == NULL)
		return (NULL);
	else
		return (current);
}
