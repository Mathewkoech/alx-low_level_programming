#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of 2 diagonals of a square
 *@a: array of int types
 *@size: size
 *Return: void
 */

void print_diagsums(int *a, int size)
{
int b, sum1 = 0, sum2 = 0;
for (b = 0; b < size; b++)
{
sum1 += a[b];
sum2 += a[size - b - 1];
a += size;
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
