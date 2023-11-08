#ifndef DOG_H
#define DOG_H
/**
 * dog - Struct for dog
 * @name: The name of the dog
 * @agr: Age of the dog
 * @owner: The dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef struct for dog to dog_t
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
