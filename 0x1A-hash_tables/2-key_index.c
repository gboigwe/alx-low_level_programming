#include "hash_tables.h"

/**
 * key_index - obtain key/value index
 *      note pair is stored in hash table array.
 * @key: Variable that holds key index.
 * @size: is the size of hash table array.
 *
 * Return: index of the key.
 * Description: The use of djb2 algorithm is considered.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
