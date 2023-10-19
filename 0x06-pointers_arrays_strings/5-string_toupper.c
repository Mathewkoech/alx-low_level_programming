#include "main.h"

/**
*string_toupper - converts lowercase to upper case in a string
*@x: string
*Return: Always (0) Success
*/

char *string_toupper(char *x)

{

int i = 0;

while (x[i] != '\0')

{
if ((x[i] >= 'a') && (x[i] <= 'z'))
{

x[i] = (x[i] - 32);
}

i++;
}

return (x);
}
