#include "main.h"
/**
 * print_rev - Reverses whatever is been print on to the screen
 * @s : The string to be checked
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
