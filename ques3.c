#include <stdio.h>

int main()
{
    int basicpay = 50000;
    float da = (50.0 / 100.0) * basicpay;
    int hra = (20.0 / 100.0) * basicpay;
    int va = (10.0 / 100.0) * basicpay;

    float grosspay = basicpay + da + hra + va;
    printf("Rs %f\n", grosspay);
    return 0;
}