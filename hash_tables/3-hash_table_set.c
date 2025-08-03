#include "hash_tables.h"
/**
 * hash_table_set - Adds or updates a key/value pair in a hash table
 * @ht: Pointer to the hash table
 * @key: The key (must not be empty)
 * @value: The value (will be duplicated)
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node, *current;
char *value_dup;
unsigned long int index;
if (!ht || !key || !*key || !value)
return (0);
index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];
while (current)
{
if (strcmp(current->key, key) == 0)
{
value_dup = strdup(value);
if (!value_dup)
return (0);
free(current->value);
current->value = value_dup;
return (1);
}
current = current->next;
}
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (!new_node->key || !new_node->value)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
