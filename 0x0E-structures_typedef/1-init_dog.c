#include "dog.h"
/**
 *init_dog - The defined type for struct
 *@owner: one char element
 *@d: pointer to address
 *@name: element for the name
 *@age: the age element in the struct
 *Return: it void and so returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
