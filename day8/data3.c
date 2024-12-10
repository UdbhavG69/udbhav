/*       0    1   2   3  4    5   6
    arr=[10, 20, 30, 40, 50, 60, 70];   ex: data = 50
    
    * array element present in pos 4
    int i=4;
    arr[i]==50
    50 == 50 
*/

/*
    10  34  50  2   5  ---> min 2
*/
#include<stdio.h>
int main(){
    int arr[10]={10,34,50,2,5};
    int data =5;
    for(int i=0;i<5;i++){
        if(arr[i]==data){
            printf("The position is :%d",i);
            break;
        }
    }
}