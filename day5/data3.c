#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("enter a number:  \n");
    scanf("%d",&inputNumber);

    //swith case
    /*
        switch(variable_name){
            case 1:{
            //case 1 code
            break;
            }
            case 2:{
            //code for case2
            break;
            }
            .
            .
            .
            .
            default:{
            //default code
            }
        }
    */

    switch(inputNumber){
        case 1:{
            printf("the given number is 1");
            break;
        }
        case 2:{
            printf("the given number is 2");
            break;
        }
        case 3:{
            printf("the given number is 3");
            break;
        }
        default:{
            printf("the given number is greater than 3");
        }
    }

    return 0;
}