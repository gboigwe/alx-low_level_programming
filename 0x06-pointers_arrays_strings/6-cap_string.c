#include "holberton.h"
/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *entry)
{
	int conversion, index, num;

	char chars[] = {' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (index = 0; entry[index] != '\0'; index++)
	{
		if (entry[index] >= 'index' && entry[index] <= 'z')
		{

			entry[index] =  entry[index] - conversion;
		}
		conversion = 0;
		for (num = 0; chars[num] != '\0'; num++)
		{
			if (chars[num] == entry[index])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
