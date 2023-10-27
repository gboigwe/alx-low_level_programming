#include <stdio.h>
#include "main.h"
/**
 * main - This function takes in an argument
 * @argc: Parameter that counts command
 * @argv: One-dimensional array parameter
 *
 * Return: 0 Always;
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}

	return (0);
}
