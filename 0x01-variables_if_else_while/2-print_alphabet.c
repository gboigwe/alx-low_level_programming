#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	char newline = "\n";

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	purchar(newline);
	return (0);
}
