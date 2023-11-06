#ifndef INIT_DOG_C
#define INIT_DOG_C
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *init_dog - Initializes a variable of type struct dog.
 *@d:pointer to struct_dog
 *@name:name of dog
 *@age:age of the dog
 *@owner:owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
#endif /*INIT_DOG_C*/
