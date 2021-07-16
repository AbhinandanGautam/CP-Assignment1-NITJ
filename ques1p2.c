#include <stdio.h>

int main()
{
    /* using if-else */
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    /* using switch statement */

    switch (num % 2)
    {
    case 0:
        printf("%d is even.\n", num);
        break;

    case 1:
        printf("%d is odd.\n", num);
        break;
    }
    return 0;
}