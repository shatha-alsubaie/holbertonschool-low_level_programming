#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns a newly allocated copy of a string
 * @str: string to copy
 *
 * Return: pointer to the copy, or NULL on failure
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog (a copy is stored)
 * @age: age of the dog
 * @owner: owner of the dog (a copy is stored)
 *
 * Return: pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	dog->owner = _strdup(owner);
	if ((name != NULL && dog->name == NULL) ||
	    (owner != NULL && dog->owner == NULL))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->age = age;

	return (dog);
}
