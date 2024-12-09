#include<stdio.h>
int main(){
    int marks;
    printf("enter a number:\n");
    scanf("%d",& marks);
    printf("value of marks is;%d\n",marks);
    printf("values of variable marks: %p",& marks);
    return 0;
}