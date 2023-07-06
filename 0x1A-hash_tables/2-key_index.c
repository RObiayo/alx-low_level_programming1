#include "hash_tables.h"

/**
 * key_index - Find the index at which a key/value
 * pair should be stored
 * @key: key to get the index of.
 * @size: size of the array of the hash table.
 * Return: key index
 * Description: employs the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
