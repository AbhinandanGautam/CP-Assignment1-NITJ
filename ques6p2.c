#include<stdio.h>

int main(){
    int phy,chem,math;
    printf("Marks obtained in Physics: ");
    scanf("%d",&phy);
    printf("Marks obtained in Chemistry: ");
    scanf("%d",&chem);
    printf("Marks obtained in Mathematics: ");
    scanf("%d",&math);    

    if(phy>=55 && chem>=60 && math>=65){
        if( (phy+chem+math>190) || (math+chem>=130)){
            printf("The candidate is eligible for admission.");
        }else{
            printf("The candidate is not eligible for admission.");
        }
    }else{
            printf("The candidate is not eligible for admission.");
    }

    return 0;
}