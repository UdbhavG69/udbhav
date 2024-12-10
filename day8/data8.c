#include<stdio.h>
int main(){
    int inputchar;
    printf("enter a charature");
    scanf("%d",&inputchar);
    if(inputchar>=65 && inputchar<90){
        printf("the given number is upper");
    }
    else{
        printf("the given number is lower");
    }
    return 0;
}