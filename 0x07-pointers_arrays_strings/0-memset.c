#include "main.h"
/**
 * _memset - This function fills the block of the memory
 *				with a specific byte
 * @s: The address of the variable
 * @b: The value to be considered
 * @n: The number of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memry = s;
	unsigned val = b;

	for (i = 0; i < n; i++)
	{
		memry[i] = val;
	}
	return (memry);
}
