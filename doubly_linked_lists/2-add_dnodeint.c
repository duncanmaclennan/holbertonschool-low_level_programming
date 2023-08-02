#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - A function prints a list
 * @head: the list
 * @n: the count
 * Return: the count
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
