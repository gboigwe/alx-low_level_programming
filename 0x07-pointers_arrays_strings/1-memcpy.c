#include "main.h"
/**
 * _memcpy - This function is used to copy a block of data from a
 *					source address to a destination
 * @dest: The destiinaion variable
 * @src: The source variable
 * @n: The number of n block
 *
 * Return:This function does not return anything
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *source = src;
	char *destin = dest;

	for (int i = 0; i < n; i++)
	{
		destin[i] = source[i];
	}
}
