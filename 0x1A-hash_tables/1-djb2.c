#include "hash_tables.h"

/**
 * hash_djb2 - Hashing djb2 algorithm with hash function.
 * @str: Consider string for hash.
 *
 * Return: Return the hash calculated.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
