#include "hash_tables.h"

/**
 * key_index - function to map key to index in hash table
 * @key: key to be mapped
 * @size: size of the array of hash table
 * Return: unsigned long int the index of the element in
 * the array of hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
