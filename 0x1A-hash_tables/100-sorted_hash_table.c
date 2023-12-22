#include "hash_tables.h"

/**
 * shash_table_create - create a new sorted hash table
 * @size: size of the hash table array
 * Return: the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *table = (shash_table_t *)malloc(sizeof(shash_table_t));
shash_node_t **array = (shash_node_t **)malloc(size * sizeof(shash_node_t *));

if (!table)
return (NULL);
if (!array)
{
free(table);
return (NULL);
}

table->size = size;
table->array = array;
table->shead = NULL;
table->stail = NULL;

while (size-- > 0)
{
(*array) = NULL;
array = array + 1;
}

return (table);
}

/**
 * handle_sorting - after insert to_be_sorted node
 * in its right place, we need to handle sorting in
 * the sorted hash table itself
 * - tranverse until found elem greater than the stored node
 * - place it and handles pointers of prev and next in doubly
 * linked list of the sorted hash table
 * @ht: sorted hash table
 * @to_be_stored: node to be sorted
 * Return: void
*/
void handle_sorting(shash_table_t *ht, shash_node_t *to_be_stored)
{
shash_node_t *temp = NULL;

temp = ht->shead;
while (temp && strcmp(temp->key, to_be_stored->key) <= 0)
temp = temp->snext;

if (temp)
{
to_be_stored->snext = temp;
to_be_stored->sprev = temp->sprev;
/* check if current node is not a head of sorted hash table */
if (temp->sprev)
temp->sprev->snext = to_be_stored;
else
ht->shead = to_be_stored;
temp->sprev = to_be_stored;
}
else
{
to_be_stored->snext = NULL;
to_be_stored->sprev = ht->stail;
/* check if current node is not a tail of sorted hash table */
if (ht->stail)
ht->stail->snext = to_be_stored;
else
ht->shead = to_be_stored;
ht->stail = to_be_stored;
}
}

/**
 * shash_table_set - set element to sorted hash table
 * @ht: sorted hash table
 * @key: hash key
 * @value: hash value
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
shash_node_t *temp = NULL;
shash_node_t *to_be_stored = NULL;

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

to_be_stored = (shash_node_t *)malloc(sizeof(shash_node_t));
to_be_stored->key = strdup(key);
to_be_stored->value = strdup(value);

temp = ht->array[index];
ht->array[index] = to_be_stored;
to_be_stored->next = temp;

/* handling the sorted hash table */
handle_sorting(ht, to_be_stored);

return (1);
}

/**
 * shash_table_get - get item from sorted hash table
 * @ht: sorted hash table
 * @key: key to retrieve
 * Return: the item or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index = 0;
shash_node_t *temp = NULL;

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

/**
 * shash_table_print - print a sorted hash table
 * - print it with the respect of sorting
 * @ht: the sorted hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node = NULL;
short printed = 0;

if (!ht)
return;

node = ht->shead;
printf("{");
while (node)
{
if (printed)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
node = node->snext;
printed = 1;
}
printf("}\n");
}

/**
 * delete_recursive - delete nodes that is connected to each other
 * @node: the node to delete
 * Return: void
 */
void delete_recursive(shash_node_t *node)
{
if (!node)
return;
delete_recursive(node->next);
free(node->key);
free(node->value);
free(node);
}

/**
 * shash_table_delete - delete elem from hash table
 * @ht: sorted hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
unsigned long int i = 0;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
delete_recursive(ht->array[i]);

free(ht->array);
free(ht);
}

/**
 * shash_table_print_rev - print a sorted hash table in reverse order
 * - print it with the respect of sorting
 * @ht: the sorted hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node = NULL;
short printed = 0;

if (!ht)
return;

node = ht->stail;
printf("{");
while (node)
{
if (printed)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
node = node->sprev;
printed = 1;
}
printf("}\n");
}
