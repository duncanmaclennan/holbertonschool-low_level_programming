#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function prints a list
 * @h: the list
 * Return: the count
 */

size_t list_len(const list_t *h)
{

	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
