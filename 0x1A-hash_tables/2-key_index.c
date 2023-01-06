#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key in hash table
 * @size: size of array of the hash table
 *
 * Return: index of key/value pair in the array of the hash table
 *
 * Description: Using the djd2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
