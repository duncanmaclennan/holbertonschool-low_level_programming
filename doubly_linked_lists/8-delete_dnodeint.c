#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node
 * @head: the list
 * @index: the index
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	if (!current)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
