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
unsigned long int index = key_index((const unsigned char *) key, ht->size);
char *key_str = malloc(sizeof(char *)), *value_str = malloc(sizeof(char *));
hash_node_t *target = ht->array[index], *temp = NULL;
hash_node_t *to_be_stored = (hash_node_t *) malloc(sizeof(hash_node_t));

if (!to_be_stored || !key_str || !value_str)
return (0);

to_be_stored->key = strcpy(key_str, key);
to_be_stored->value = strcpy(value_str, value);
to_be_stored->next = NULL;

if (!target)
target = to_be_stored;
else
{
temp = target;
target = to_be_stored;
to_be_stored->next = temp;
}

return (1);
}
