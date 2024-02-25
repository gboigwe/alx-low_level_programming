#include "hash_tables.h"

/**
 * hash_table_set - Update hash table elements.
 * @ht: Points to the hash table.
 * @key: Variable for key is not empty.
 * @value: Variable for value in the index key.
 *
 * Return: Return when NULL is encountered.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	char *dup_value;
	unsigned long int index, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = dup_value;
			return (1);
		}
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(dup_value);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = dup_value;
	temp->next = ht->array[index];
	ht->array[index] = temp;

	return (1);
}
