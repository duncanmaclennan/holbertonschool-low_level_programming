#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - finds a index of a key
 * @ht: the table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node)
		{
			hash_node_t *temp = node;

			node = node->next;

			free(temp->key);
			free(temp->value);

			free(temp);
		}
	}

	free(ht->array);

	free(ht);
}
