#include<stdio.h>
#include<string.h>
int main(){
    char string1[100];
    printf("Enter a string: \n");
    scanf("%[^\n]s",string1);
    printf("The string is:  %s",strrev(string1));
    return 0;
}