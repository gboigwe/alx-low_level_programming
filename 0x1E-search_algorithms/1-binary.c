#include <stdio.h>

/**
 * binary_search - Searching for value in a sorted array
 * of integers. Binary Search was used.
 * @array: Pointing to the first element of the array
 * @size: This is the number of elements that are in the array
 * @value: Value we are searching for
 * Return: index, or -1 if value not present
 * or if the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t mid;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
