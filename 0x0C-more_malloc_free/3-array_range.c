#include "main.h"
#include <stdlib.h>
/**
 * array_range - This function creates an array of integers
 * @min: Minimum value to be taken
 * @max: Maximum value to be taken
 *
 * Return: An arr is returned:
 */
int *array_range(int min, int max)
{
	int num_elements = max - min + 1;
	int *arr = (int *)malloc(sizeof(int) * num_elements);
	int i;

	if (min > max)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for i(i = 0; i < num_elements; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

