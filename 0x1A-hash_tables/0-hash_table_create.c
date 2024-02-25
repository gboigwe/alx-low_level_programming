#include "hash_tables.h"

/**
 * hash_table_create - Hash table is created.
 * @size: is the size of the array.
 *
 * Return: In error, return NULL.
 *         Else - return pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_table;
	unsigned long int index;

	hsh_table = malloc(sizeof(hash_table_t));
	if (hsh_table == NULL)
		return (NULL);

	hsh_table->size = size;
	hsh_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hsh_table->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		hsh_table->array[index] = NULL;

	return (hsh_table);
}
