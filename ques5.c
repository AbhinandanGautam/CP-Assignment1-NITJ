#include <stdio.h>

// using third variable
void threevarswap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// without third variable
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    printf("Enter two number: ");
    int a, b;
    scanf("%d%d", &a, &b);

    threevarswap(&a, &b);
    printf("a=%d  b=%d\n", a, b);

    swap(&a, &b);
    printf("a=%d  b=%d\n", a, b);

    return 0;
}