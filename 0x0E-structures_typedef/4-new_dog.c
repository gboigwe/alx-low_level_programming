#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
	{
		return (NULL);
	}

	dog_new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	dog_new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	dog_new->name = _strcpy(dog_new->name, name);
	dog_new->age = age;
	dog_new->owner = _strcpy(dog_new->owner, owner);

	return (dog_new);
}
