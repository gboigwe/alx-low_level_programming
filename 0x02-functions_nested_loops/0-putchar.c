#include <stdio.h>
/**
 * _putchar - Writes a character to the standard output
 * @c: This parameter is not in this context
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar\n";

	for (int a = 0; str[a] != 0; a++)
	{
		_putchar(str[]);
	}
	return (0);
}
