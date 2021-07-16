#include <stdio.h>
int main()
{
    float fh, cl;
    char ch;
    printf("\n Press c to convert temperature from Fahrenheit to Celsius.");
    printf("\n Press f to convert temperature from Celsius to Fahrenheit.");
    printf("\n Enter your choice (c, f): ");
    scanf("%c", &ch);
    if ((ch == 'c') || (ch == 'C'))
    {
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f", &fh);
        cl = (fh - 32) / 1.8;
        printf("\nTemperature in Celsius: %.2f\n", cl);
    }
    else if ((ch == 'f') || (ch == 'F'))
    {
        printf("\nEnter temperature in Celsius: ");
        scanf("%f", &cl);
        fh = (cl * 1.8) + 32;
        printf("\nTemperature in Fahrenheit: %.2f\n", fh);
    }
    else
    {
        printf("\nInvalid Choice !!!\n");
    }
    return 0;
}