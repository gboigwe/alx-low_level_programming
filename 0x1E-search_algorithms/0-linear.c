#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - Searching through an array of integers for
* a value, Linear search algorithm was used
* @array: Pointing to the first element of the array
* @size: This is the number of elements that are in the array
* @value: Value we are searching for
*
* Return: first index, or -1 if the value not present in array
* or if the array is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
