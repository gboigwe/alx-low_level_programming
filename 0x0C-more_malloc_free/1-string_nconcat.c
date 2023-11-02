#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - This funtion concat string pointing to a memory
 * @s1: String value to be taken
 * @s2: String value to be taken
 *
 * Return: 0 Always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	unsigned int len1 = 0;
	unsigned int len2 = 0;

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
/**
 * concats - This function concats the string
 * @total_len: The value of length size
 *
 * Return: The value of concats is returned
 */
char *concats = (char *)malloc(total_len + 1)
{
	unsigned int total_len = len1 + n;

	if (concats == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < len1; i++)
	{
		concats[i] = s1[i];
	}
	for (unsigned int i = 0; i < n; i++)
	{
		concats[len1 + i] = s2[i];
	}
	concats[total_len] = '\0';
	return (concats);
}
