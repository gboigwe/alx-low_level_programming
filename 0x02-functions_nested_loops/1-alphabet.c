#include "main.h"
/**
 * print_alpahabet - Make the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchat('\n');
}
