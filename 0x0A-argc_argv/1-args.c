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
while (argc--)
printf("%s\n", *argv++);
return (0);
}
