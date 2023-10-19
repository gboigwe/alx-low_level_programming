#include "main.h"
/**
 * _strncat - This function concatenates two string in at most n bytes from source
 *
 * @dest: This is the destination variable
 * @src: This is the source variable
 * @n: This is the n bytes from src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, number;

	for (i = 0; dest[i] != '\0'; i++);
	for (number = 0; number < n && src[number] != '\0'; number++)
	{
		dest[i] = src[number];
		i++;
	}
	if (number < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
