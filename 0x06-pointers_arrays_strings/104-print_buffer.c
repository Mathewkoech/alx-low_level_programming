#include "main.h"

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to print.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
int ,o, i, j;
o = 0

if (size <= 0)
{
printf('\n');
return;
}

while (o < size)
{
j = size - o < 10 ? size - o : 10;
printf("%08x: ", o)   
   
for (i = 0; i < size; i += 10)
    
