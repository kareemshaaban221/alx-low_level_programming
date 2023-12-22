#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * loop on the array
 * print for the first elemnt in the array '{'
 * loop on the list inside each index of the array
 * check if this is the last elemnt of the array
 * if so don't print ','
 * print the key and the value
 * if this is the last index of the array and the last elemnt
 * there, print '}'
 * @ht: the hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{

unsigned long int i = 0;
hash_node_t *node = NULL;
short printed = 0;

if (!ht)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
if (i > 0 && node && printed)
printf(", ");
while (node)
{
printed = 1;
printf("'%s': '%s'", node->key, node->value);
if (node->next)
printf(", ");
node = node->next;
}
}
printf("}\n");
}
