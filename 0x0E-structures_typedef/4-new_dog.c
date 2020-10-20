#include "dog.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length size
 */

int _strlen(char *s)
{
	int a = 0;

	if (s == NULL);
		return (NULL);
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
	int name_len;
	int owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc((name_len + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc((owner_len + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	i = 0;
	while (i < name_len)
	{
		ndog->name[i] = name[i];
		i++;
	}
	i = 0;
	while (i < owner_len)
	{
		ndog->owner[i] = owner[i];
		i++;
	}
	ndog->age = age;
	return (ndog);
}
