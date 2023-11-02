#include <stdlib.h>
#include "main.h"
/**
 *_realloc- reallocates a memory block using malloc and free
 *@ptr:former pointer to allocated memory
 *@new_size:new size of new memory block
 *@old_size:old size of allocated space for ptr
 *Return:pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *old_ptr = ptr;
	size_t i, max = new_size;

	if (ptr == NULL)

	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}

	s = malloc(new_size);

	if (s == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
		s[i] = old_ptr[i];
	free(ptr);
	return (s);
}
