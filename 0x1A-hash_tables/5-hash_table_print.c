#include "hash_tables.h"

/**
 * hash_table_print - Printing a hash table.
 * @ht: Pointer to the hash table for printing.
 *
 * Description: Key/value pairs wil be printed in order
 *              structured in array format of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned char comma_sep = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (comma_sep == 1)
				printf(", ");

			node = ht->array[index];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_sep = 1;
		}
	}
	printf("}\n");
}
