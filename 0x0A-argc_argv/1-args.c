#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all arguments recieved
 *@argc: number of command line arguments
 *@argv: array containing command line arguments
 *Return: Always (0) Success
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
argv[i] = argv[i];
}
printf("%d\n", i - 1);
return (0);
}
