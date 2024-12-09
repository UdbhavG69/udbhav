#include<stdio.h>
//fun dec
int sumOfevenNo(int);

int main(){
    int inputNumber=0,res;
    printf("Enter a number: \n");
    scanf("%d",&inputNumber);
    res=sumOfevenNo(inputNumber);
    printf("the sum of n even number %d is %d ",inputNumber,res);
    return 0;
}

int sumOfevenNo(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}