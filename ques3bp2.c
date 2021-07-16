#include<stdio.h>

int main(){
    printf("Enter a character: ");
    char c;
    scanf("%c",&c);

    int a = c;

    if((a>=65 && a<=90) || (a>=97 && a<=122)){
        printf("character is an alphabet\n");
        if(a>=65 && a<=90){
            printf("character is upper case\n");
        }else{
            printf("character is lower case\n");
            if(a==97 || a==101 || a==105 || a==111 || a==117){
                printf("character is vowel\n");
            }else{
                printf("character is consonant\n");
            }
        }
    }
    else if(a>=48 && a<=57){
        printf("character is an digit\n");
        // zero is only digit b/w 0 to 9 which is divisible by 2 and 5 
        if(a==48){
            printf("divisible by both 2 and 5\n2");
        }
    }

    return 0;
}