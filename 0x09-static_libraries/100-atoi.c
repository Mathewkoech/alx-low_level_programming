#include "main.h"
#include <stdio.h>

/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
int i = 1;
unsigned int result = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
result = result * 10 + (*s - '0');
else if (result > 0)
break;
} while (*s++);
return (result *i);
}
