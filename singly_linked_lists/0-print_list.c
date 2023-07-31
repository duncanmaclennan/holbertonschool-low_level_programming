#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - A function prints a list
 * @h: the list
 * Return: the count
 */

size_t print_list(const list_t *h)
{
	size_t count;
	size_t i;

	count = 0;
	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			for (i = 0; i < h->len; i++)
			{
				putchar(h->str[i]);
			}
			putchar('\n');
		}
		count++;
		h = h->next;
	}
	return (count);
}
