#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha == 'z' && ALPHA =='Z')
	{
		putchar(alpha);
		alpha++;
		putchar(ALPHA);
		ALPHA++;
	}
	return (0);
}
