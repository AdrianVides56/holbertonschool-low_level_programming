#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *cp;

	cp = malloc(sizeof(dog_t));
	if (cp == NULL)
	{
		free(cp);
		return (NULL);
	}

	(*cp).name = malloc(sizeof(name));
	if ((*cp).name == NULL)
	{
		free((*cp).name);
		free(cp);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
	(*cp).name[i] = name[i];
	}

	(*cp).age = age;

	(*cp).owner = malloc(sizeof(owner));
	if ((*cp).owner == NULL)
	{
		free((*cp).owner);
		free((*cp).name);
		free(cp);
		return (NULL);
	}

	for (j = 0; owner[j] != '\0'; j++)
	{
	(*cp).owner[j] = owner[j];
	}

	return (cp);
}
