#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	while  (i < 102)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%d\n", i);
		}
		i++;
	}
	return (0);
}
