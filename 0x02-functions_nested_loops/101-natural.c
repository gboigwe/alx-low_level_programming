#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	naturals(1024);
	return (0);
}
void naturals(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
		}
	}
}
