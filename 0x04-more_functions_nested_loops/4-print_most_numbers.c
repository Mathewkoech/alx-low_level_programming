#include <stdio.h>

/**
* print_most_numbers - prints numbers from 0 to 9, excluding 2&4
*/
void print_most_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
{
putchar(num);
}
}
putchar('\n');
}
