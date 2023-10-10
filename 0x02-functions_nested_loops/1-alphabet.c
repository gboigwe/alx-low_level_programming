#include <unsigned.h>
/**
 * print_alpahabet - Writes a character to the standard output
 *
 * Return: Always 0 (Success)
 */
int print_alphabet()
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
		_putchar('\n');
	}
	return (0);
}
