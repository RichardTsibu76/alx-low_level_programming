#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: points to the variable
 * Return: Nothing it is void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
