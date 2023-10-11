#include <stdio.h>

void print_fibonacci(void);

int main(void)
{
    print_fibonacci();
    return (0);
}

void print_fibonacci(void)
{
    int n1 = 1, n2 = 2;
    int count = 2;

    printf("%d, %d", n1, n2);

    while (count < 98)
    {
        int next = n1 + n2;
        printf(", %d", next);

        n1 = n2;
        n2 = next;
        count++;
    }

    printf("\n");
}
