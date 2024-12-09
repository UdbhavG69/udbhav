#include<stdio.h>
int main(){
    int inputnumber=0;
    printf("enter a number:\n");
    scanf("%d",&inputnumber);
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=inputnumber);
    return 0;
}