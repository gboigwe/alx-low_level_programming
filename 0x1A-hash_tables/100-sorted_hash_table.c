#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: 0 if error.
 *         Else - Return pointer to sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hsh_t;
	unsigned long int index;

	hsh_t = malloc(sizeof(shash_table_t));
	if (hsh_t == 0)
		return (0);

	hsh_t->size = size;
	hsh_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hsh_t->array == 0)
		return (0);
	for (index = 0; index < size; index++)
		hsh_t->array[index] = 0;
	hsh_t->shead = 0;
	hsh_t->stail = 0;

	return (hsh_t);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: Pointer variable to sort hash table.
 * @key: Variable key to indexing.
 * @value: The variable value of key index.
 *
 * Return: 0 for failed.
 *         Else - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp;
	char *dup_value;
	unsigned long int index;

	if (ht == 0 || key == 0 || *key == '\0' || value == 0)
		return (0);

	dup_value = strdup(value);
	if (dup_value == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = dup_value;
			return (1);
		}
		temp = temp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == 0)
	{
		free(dup_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == 0)
	{
		free(dup_value);
		free(new);
		return (0);
	}
	new->value = dup_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == 0)
	{
		new->sprev = 0;
		new->snext = 0;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = 0;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != 0 && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == 0)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - Retrieving the value associated with
 *                   a key in a sorted hash table.
 * @ht: Pointer variable to sort hash table.
 * @key: The key index to the value.
 *
 * Return: 0 if not matched.
 *         Else - the value of the key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == 0 || key == 0 || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);

	node = ht->shead;
	while (node != 0 && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == 0) ? 0 : node->value);
}

/**
 * shash_table_print - Print out hash table sorted in order.
 * @ht: Pointer variable to sort hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == 0)
		return;

	node = ht->shead;
	printf("{");
	while (node != 0)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != 0)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print out a sorted reversed hash table.
 * @ht: Variabe the points to sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == 0)
		return;

	node = ht->stail;
	printf("{");
	while (node != 0)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != 0)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deleting a sorted hash table.
 * @ht: Pointer variable to sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == 0)
		return;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(head->array);
	free(head);
}
