#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 * @h: pointer
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
