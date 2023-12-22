#include "hash_tables.h"

/**
 * delete_recursive - delete nodes that is connected to each other
 * @node: the node to delete
 * Return: void
*/
void delete_recursive(hash_node_t *node)
{
if (!node)
return;
delete_recursive(node->next);
free(node);
}

/**
* hash_table_delete - delete a hash table
* - loop on the array get each node
* - iterate on nodes in the same index and delete them recursively
* @ht: the hash table
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
delete_recursive(ht->array[i]);

free(ht->array);
free(ht);
}
