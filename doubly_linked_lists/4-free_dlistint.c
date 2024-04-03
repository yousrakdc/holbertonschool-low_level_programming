#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
