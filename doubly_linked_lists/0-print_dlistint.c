#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - A function prints a list
 * @h: the list
 * Return: the count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
