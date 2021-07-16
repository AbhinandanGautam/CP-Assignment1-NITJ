#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    // using if statement
    if(a>b){
        if(a>c){
            printf("%d is largest number.\n",a);
        }else{
            printf("%d is largest number.\n",c);
        }
    }else{
        if(b>c){
            printf("%d is largest number.\n",b);
        }else{
            printf("%d is largest number.\n",c);
        }
    }
    // using else if statement
    if(a>b && a>c){
            printf("%d is largest number.\n",a);
    }else if(a>b && a<c){
            printf("%d is largest number.\n",c);
    }else if(a<b && b>c){
            printf("%d is largest number.\n",b);
    }else{
            printf("%d is largest number.\n",c);
    }
    // using conditional statement
    a>b ? (a>c ? printf("%d is largest number.\n",a) : printf("%d is largest number.\n",c)) : ( b>c ? printf("%d is largest number.\n",b) : printf("%d is largest number.\n",c));
    return 0;
}