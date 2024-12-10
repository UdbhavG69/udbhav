#include<stdio.h>
int main(){
    int inputNumber=0,countNumber=0,digit;
    printf("enter a number:  ");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        countNumber++;
        inputNumber=inputNumber/10;
    }
    printf("The count of a number is : %d",countNumber);
    return 0;
}