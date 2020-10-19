#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - structure of dog
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;

#endif
