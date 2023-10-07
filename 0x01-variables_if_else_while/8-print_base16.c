#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (int i = 0; 1< 10; i++)
	{
		if (i < 10)
		{
			putchar('0' + 1);
		}
		else
		{
			putchar('a' +(i - 10));
		}
	}

	putchar('\n');

	return 0;
