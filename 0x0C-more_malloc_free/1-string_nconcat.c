#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - This funtion concat string pointing to a memory
 * @s1: String value to be taken
 * @s2: String value to be taken
 * @n: Size of memory space
 *
 * Return: 0 Always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}
}
