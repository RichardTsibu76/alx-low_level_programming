#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name
 * @age: age of dog
 * @owner: owner
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);
	doggy->name = strdup(name);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = strdup(owner);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->age = age;
	return (doggy);
}
