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
unsigned long int index = key_index((const unsigned char *)key, ht->size);
hash_node_t *temp = NULL;
hash_node_t *to_be_stored = (hash_node_t *)malloc(sizeof(hash_node_t));

if (!to_be_stored || !value || !key || !(*key))
return (0);

if (!ht->array[index])
ht->array[index] = to_be_stored;
else
{
temp = ht->array[index];
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
if (!temp->value)
return (0);
free(to_be_stored);
return (1);
}
temp = temp->next;
}
to_be_stored->key = strdup(key);
to_be_stored->value = strdup(value);
to_be_stored->next = NULL;

if (!to_be_stored->key || !to_be_stored->value)
return (0);
temp = ht->array[index];
ht->array[index] = to_be_stored;
to_be_stored->next = temp;
free(temp);
}

return (1);
}
