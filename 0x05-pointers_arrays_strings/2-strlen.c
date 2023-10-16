#include "main.h"
/**
 * _strlen - This function checks the length of a string
 * @s: The character to be checked
 */
int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
