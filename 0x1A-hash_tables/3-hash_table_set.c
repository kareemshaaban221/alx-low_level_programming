#include "hash_tables.h"

/**
 * hash_table_set - set a key/value pair to a hash table
 * make a hash varsion of key using key_index function
 * get the ht->array at the index of key
 * create a node with the value
 * append to the node inside the position
 * @ht: the hash table
 * @key: key string
 * @value: value string
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *new_hash_node = NULL;
hash_node_t *tmp = NULL;

if (!ht || !key || !(*key) || !value)
return (0);

index = key_index((unsigned char *)key, ht->size);
tmp = ht->array[index];

/* check if key exists */
while (tmp && strcmp(tmp->key, key) != 0)
tmp = tmp->next;

/* update value if key already exists */
if (tmp)
{
free(tmp->value);
tmp->value = strdup(value);
return (1);
}

/* add new node if key not found */

new_hash_node = malloc(sizeof(*new_hash_node));
if (!new_hash_node)
return (0);

new_hash_node->key = strdup(key);
new_hash_node->value = strdup(value);

new_hash_node->next = ht->array[index];
ht->array[index] = new_hash_node;

return (1);
}
