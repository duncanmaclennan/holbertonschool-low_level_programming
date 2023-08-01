#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "lists.h"

/**
 * strdup - A function prints a list
 * @s: a string
 * Return: the d
 */
char *strdup(const char *s)
{
	char *d = malloc(strlen(s) + 1);

	if (d == NULL)
		return (NULL);
	strcpy(d, s);
	return (d);
}

/**
 * add_node - A function prints a list
 * @head: the list
 * @str: the string
 * Return: the count
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
