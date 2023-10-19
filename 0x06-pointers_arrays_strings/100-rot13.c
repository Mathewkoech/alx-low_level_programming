#include "main.h"

/**
* rot13 - Encodes a string using ROT13 cipher.
* @str: The string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
int a = 0;
int b;

char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[a])
{
for (b = 0; b < 52; b++)
{
if (str[a] == alpha[b])
			{
str[a] = rot[b];
break;
}
}

a++;
}

return (str);
}
