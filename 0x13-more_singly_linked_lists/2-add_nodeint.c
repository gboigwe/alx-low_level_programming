#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds an integer to the list
 * @head: Pointer pointing to next double pointer
 * @n: Number to be considered in adding
 *
 * Return: The added node is done
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *temp;
	size_t number =  0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (n[number])
	{
		number++;
	}
	temp->len = number;
	temp->n = strdup(n);
	temp->next = *head;
	*head = temp;
	return (temp);
}
