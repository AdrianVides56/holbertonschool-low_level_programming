#include "dog.h"


/**
 * \*_strcpy - copy a string in other string
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
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
		return (NULL);
	}
	(*cp).owner = malloc(sizeof(owner));
	if ((*cp).owner == NULL)
	{
		free((*cp).owner);
		return (NULL);
	}

	_strcpy((*cp).name, name);
	(*cp).age = age;
	_strcpy((*cp).owner, owner);

	return (cp);
}
