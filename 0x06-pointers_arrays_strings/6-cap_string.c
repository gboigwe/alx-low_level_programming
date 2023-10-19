#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @cap: the string to look at
 *
 * Return: This function returns the capitalize word
 */
char *cap_string(char *cap)
{
	int i = 0;
	int j;
	char badBoys[] = " \n\t,;.!?\"(){}";

	if (z[0] >= 'a' && cap[0] <= 'z')
		cap[0] -= 32;

	for (; cap[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (cap[i] == badBoys[j])
			{
				if (cap[i + 1] >= 'a' && z[i + 1]  'z')
					z[i + 1] -= 32;
			}
		}
	}

	return (z);
}
