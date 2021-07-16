#include <stdio.h>

int main()
{
    char name[25];
    printf("enter your name: ");
    scanf("%s", name);
    int rollno;
    printf("enter your Roll No.: ");
    scanf("%d", &rollno);
    char branch[5];
    printf("enter your branch: ");
    scanf("%s", branch);

    printf("Your Mailing Address is : ");
    printf("%s.%d.%s.20@nitj.ac.in\n", name, rollno, branch);

    return 0;
}