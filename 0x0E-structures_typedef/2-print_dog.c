#include "dog.h"
#include <stdio.h>
/**
 * print_dog - This function prints out the structures of dog
 * @d: Pointer the stores the address
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf( "Name: %s\n", d->name);
		printf( "Age: %f\n", d->age);
		printf( "Owner: %s\n", d->owner);
	}
}
