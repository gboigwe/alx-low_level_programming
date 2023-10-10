#include <unistd.h>
/**
 * print_alpahabet - Writes a character to the standard output
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
		_putchar('\n');
	}
	return (0);
}
