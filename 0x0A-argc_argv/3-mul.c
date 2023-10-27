#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: incoming parameter argument
 * @argv: incoming parameter argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int tot;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	tot = (int) *argv[1] * (int) *argv[2];
	printf("%d\n", tot);
	return (0);
}
