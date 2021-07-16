#include <stdio.h>

int main()
{
    int a, b, c, d;
    int x;
    float y;
    double z;
    char f;

    a = sizeof(x);
    b = sizeof(y);
    c = sizeof(z);
    d = sizeof(f);

    printf("size of int = %d\nsize of float = %d\nsize of double = %d\nsize of char = %d\n", a, b, c, d);

    return 0;
}