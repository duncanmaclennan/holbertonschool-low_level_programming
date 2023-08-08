#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - finds a index of a key
 * @ht: the table
 * @key: the key
 * @value: the value
 * Return: 1 if successful, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    hash_node_t *node = ht->array[index];

    if (!key || !*key || !ht)
        return (0);
    if (ht == NULL)
	    return (0);
    while (node)
    {
        if (strcmp(node->key, key) == (0))
        {
            free(node->value);
            node->value = strdup(value);
            if (!node->value)
                return (0);
            return (1);
        }
        node = node->next;
    }
    node = malloc(sizeof(hash_node_t));
    if (!node)
    {
        return (0);
    }
    node->key = strdup(key);
    if (!node->key)
    {
        free(node);
        return (0);
    }
    node->value = strdup(value);
    if (!node->value)
    {
        free(node->key);
        free(node);
        return (0);
    }
    node->next = ht->array[index];
    ht->array[index] = node;
    return (1);
}
