#include <stdio.h>

int main()
{
    int num, product = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num, digit;
    while (n)
    {
        digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }

    printf("PRODUCT = %d\n", product);
    printf("SUM = %d\n", sum);

    return 0;
}