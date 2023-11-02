#include <stdlib.h>
/**
 * _calloc - This functio allocates a memory
 * @nmemb: Number of memory size
 * @size: Memory size
 *
 * Return: The value of ptr is returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	unsigned int i;
	void *ptr;

	ptr = malloc(total_size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}

