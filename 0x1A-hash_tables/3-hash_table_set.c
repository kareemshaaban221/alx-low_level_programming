#include "hash_tables.h"

/**
 * hash_table_set - set a key/value pair to a hash table
 * make a hash varsion of key using key_index function
 * get the ht->array at the index of key
 * create a node with the value
 * append to the node inside the position
 * ! (ERROR): I was declare index and temp before checking
 * the condition of NULL value
 * @ht: the hash table
 * @key: key string
 * @value: value string
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *temp = NULL;
hash_node_t *to_be_stored = NULL;

if (!ht || !key || !(*key) || !value)
return (0);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp && strcmp(temp->key, key) != 0)
temp = temp->next;

if (temp)
{
free(temp->value);
temp->value = strdup(value);
return (1);
}

to_be_stored = (hash_node_t *) malloc(sizeof(hash_node_t));
to_be_stored->key = strdup(key);
to_be_stored->value = strdup(value);
to_be_stored->next = NULL;

temp = ht->array[index];
ht->array[index] = to_be_stored;
to_be_stored->next = temp;

return (1);
}
