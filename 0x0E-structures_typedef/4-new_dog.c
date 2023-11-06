#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - Custom string copy function
 * @src: Source string to copy
 *
 * Return: A pointer to the copied string
 */

char *_strcpy(char *src)
{
	char *dest;
	int i, len = 0;

	while (src[len])
	{
		len++;
	}
	dest = malloc(len + 1);
	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A pointer to the new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = _strcpy(name);
	new_dog->owner = _strcpy(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
