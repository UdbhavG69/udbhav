#include<stdio.h>

int main(){
    //ternary op
    //(condition)?true:false ----> ?:
    int inputNumber=0;
    printf("enter a number:  ");
    scanf("%d",&inputNumber);
    (inputNumber>5)?printf("number is greater than 5"):printf("number is less than 5");
    
    return 0;
}