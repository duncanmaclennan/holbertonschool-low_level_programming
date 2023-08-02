#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums nodes
 * @head: the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
