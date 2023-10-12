#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

        i = 0;

/*	while (i < 10)
*	{
*		putchar(i);
*	} This is what is causing infinite loop so it has been avoided
*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
