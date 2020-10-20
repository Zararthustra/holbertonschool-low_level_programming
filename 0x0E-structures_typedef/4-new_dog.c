#include "dog.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length size
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age : age
 * @owner : owner
 * Return: new_dog, else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	i = 0;
	while (i < _strlen(name))
	{
		ndog->name[i] = name[i];
		i++;
	}
	i = 0;
	while (i < _strlen(owner))
	{
		ndog->owner[i] = owner[i];
		i++;
	}
	ndog->age = age;
	return (ndog);
}
