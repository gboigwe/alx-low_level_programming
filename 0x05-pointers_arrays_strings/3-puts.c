#include "main.h"
/**
 * _puts - Puts characters to the screening
 *
 * Description: This is a function that displays on screen the stord value
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

