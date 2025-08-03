#include "hash_tables.h"

/**
 * key_index - Gives the index of a key using djb2 hash algorithm
 * @key: The key to hash
 * @size: The size of the array in the hash table
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
