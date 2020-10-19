#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: name of struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);
	else
	{
		if (d->name == NULL)
			printf("Name: %p", d->name);
		else
			printf("Name: %s", d->name);
		if (d->age == NULL)
			printf("Age: %p", d->age);
		else
			printf("Age: %f", d->age);
		if (d->owner == NULL)
			printf("Owner: %p", d->owner);
		else
			printf("Owner: %s", d->owner);
			
	}
}
