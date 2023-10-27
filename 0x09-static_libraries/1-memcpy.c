#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies memory area
 *@src:memory source
 *@dest: memory dest
 *@n: number of bytes from memory area
 *
 *Return: memory destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
