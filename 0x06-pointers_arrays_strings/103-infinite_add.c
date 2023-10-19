#include "main.h"
/**
 * rev_string - reverse array
 * @n: character array
 */
void rev_string(char *n)
{
int i = 0;
int j = 0;
char temp;

while (*(n + i) != '\0')
{
i++;
}
i--;

for (j = 0; j < i; j++, i--)
{
temp = *(n + j);
*(n + j) = *(n + i);
*(n + i) = temp;
}
}

/**
 * add_digits - Helper function to add two digits and handle carry.
 * @d1: The first digit to be added.
 * @d2: The second digit to be added.
 * @carry: Pointer to the carry value (0 or 1).
 * Return: The sum of d1, d2, and the carry value.
 */
int add_digits(char d1, char d2, int *carry)

{
int sum = (d1 - '0') + (d2 - '0') + *carry;
*carry = sum / 10;
return (sum % 10);
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, carry = 0, digits = 0;

while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;

i--;
j--;

if (j >= size_r || i >= size_r)
return (0);

while (j >= 0 || i >= 0 || carry == 1)
{
int d1 = (i >= 0) ? *(n1 + i) : '0';
int d2 = (j >= 0) ? *(n2 + j) : '0';
int sum = add_digits(d1, d2, &carry);

if (digits >= (size_r - 1))
return (0);

r[digits] = sum + '0';
digits++;
j--;
i--;
}

if (digits == size_r)
return (0);

r[digits] = '\0';
rev_string(r);
return (r);
}
