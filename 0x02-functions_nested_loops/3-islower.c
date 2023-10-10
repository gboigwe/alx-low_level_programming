#include "main.h"
/**
 * _islower - Checks for lower case letter
 *
 * Return: Always 0 (Success)
 */
int _islower(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	return (1);
}
