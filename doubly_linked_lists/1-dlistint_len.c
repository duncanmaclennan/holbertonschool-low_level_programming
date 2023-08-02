#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - A function prints a list
 * @h: the list
 * Return: the count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
