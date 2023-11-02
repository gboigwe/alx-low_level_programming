#include <stdlib.h>
/**
 * malloc_checked - Allocates a memory using malloc
 * @b: The the size of the space
 *
 * Return: The value of ptr is returned
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);  // Terminate the process with status value 98 on malloc failure
	}

	return ptr;
}

