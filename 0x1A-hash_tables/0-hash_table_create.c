#include "hash_tables.h"

/**
 * hash_table_create_table_ptr - create table pointer that
 * reference the hash table
 * Return: hash table pointer
*/
hash_table_t *hash_table_create_table_ptr()
{
hash_table_t *table = NULL;

table = (hash_table_t *) malloc(sizeof(hash_table_t));
if (!table)
{
free(table);
return (NULL);
}
return (table);
}

/**
 * hash_table_create_array_ptr - create an array for hash table
 * @size: size of the array
 * Return: array pointer of type hash_node_t
*/
hash_node_t **hash_table_create_array_ptr(unsigned long int size)
{
hash_node_t **array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));

if (!array)
{
free(array);
return (NULL);
}
return (array);
}

/**
 * hash_table_create_node_ptr - create a new hash table node
 * that can be stored in hash table array
 * Return: new hash table node or null on failure
*/
hash_node_t *hash_table_create_node_ptr()
{
hash_node_t *_node = (hash_node_t *) malloc(sizeof(hash_node_t));

if (!_node)
{
free(_node);
return (NULL);
}
return (_node);
}

/**
 * hash_table_create - create a new hash table and return it or NULL
 * @size: size of the hash table
 * Return: the new hash table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = hash_table_create_table_ptr();
hash_node_t **array = hash_table_create_array_ptr(size);
hash_node_t *_node  = NULL;

if (!table)
return (NULL);
if (!array)
{
free(table);
return (NULL);
}

table->size = size;
table->array = array;

while (size-- > 0)
{
(*array) = NULL;
array = array + 1;
}

return (table);
}
