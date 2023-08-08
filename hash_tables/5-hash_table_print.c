#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - finds a index of a key
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma_flag;

	if (!ht)
	{
		return;
	}

	printf("{");

	comma_flag = 0;
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node)
		{
			if (comma_flag)
			{
				printf(", ");
			}
			else
			{
				comma_flag = 1;
			}
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
