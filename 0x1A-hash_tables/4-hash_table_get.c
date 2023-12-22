#include "hash_tables.h"

/**
 * hash_table_get - get an element from the hash table
 * get hashed key <==> hash_function(key)
 * look for key in the linked list under the index with the value of the hashed key
 * @ht: the hash table
 * @key: the hash key
 * Return: the element or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *temp = NULL;

if (!ht || !key || !(*key))
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp)
{
if (strcmp(temp->key, key) == 0)
return (temp->value);
temp = temp->next;
}

return (NULL);
}