#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - A function prints a list
 * @head: the list
 * @n: the count
 * Return: the count
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
