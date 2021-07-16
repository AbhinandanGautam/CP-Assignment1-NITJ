#include<stdio.h>

int main(){
    int s1,s2,s3,s4,s5;
    printf("Marks obtained in s1: ");
    scanf("%d",&s1);
    printf("Marks obtained in s2: ");
    scanf("%d",&s2);
    printf("Marks obtained in s3: ");
    scanf("%d",&s3);
    printf("Marks obtained in s4: ");
    scanf("%d",&s4);
    printf("Marks obtained in s5: ");
    scanf("%d",&s5);

    // suppose each subject is of 100 marks
    float percent = (s1+s2+s3+s4+s5)*100/500.0;
    printf("percentage obtained is %f\n",percent);

    if(percent>=90){
        printf("Grade A\n");
    }
    else if(percent>=80){
        printf("Grade B\n");
    }
    else if(percent>=70){
        printf("Grade C\n");
    }
    else if(percent>=60){
        printf("Grade D\n");
    }
    else if(percent>=40){
        printf("Grade E\n");
    }else{
        printf("Fail\n");
    }
    

    return 0;
}