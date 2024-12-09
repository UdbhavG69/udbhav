#include<stdio.h>
#include<string.h>
// 1. strlen() ---> to get len of str
// 2. strcpy() ---> to copy a str
// 3. strcat() ---> concat two str
// 4. strupr() ---> to convert string to upr
// 5. strlwr() ---> convert  tp lower 
// 6. strcmp() ---> to compare two strings
// 7. stricmp() ---> to compare two strings 
int main(){
    //strlen
    char str1[100]="good morning";
    int res=strlen(str1);
    printf("the length of string %s is : %d",str1,res);

    //strcpy
    char str2[100]="good morning";
    char str3[100];
    strcpy(str3,str2);
    printf("\ncopied string is: %s",str3);

    //strcat
    char str4[100]="pavan";
    char str5[10]=" gowda";
    strcat(str4,str5);
    printf("\n cat string is : %s",str4);

    //strupr
    char str6[20]="good morning";
    strupr(str6);
    printf("\n upper case is: %s",str6);

    //strlwr
    char str7[20]="GOOD MORNING";
    strlwr(str7);
    printf("\n upper case is: %s",str7);

    //strcmp
    char str8[10]="pavan";
    char str9[10]="pAvan";
    int res1=strcmp(str8,str9);
    printf("\n %d",res1);
    if(res1==0){
        printf("\n strings are same");
    }
    else{
        printf("\nStrings are not same");
    }

    //stricmp
    char str10[10]="pavan";
    char str11[10]="pAvan";
    int res2=stricmp(str8,str9);
    printf("\n %d",res2);
    if(res2==0){
        printf("\n strings are same");
    }
    else{
        printf("\nStrings are not same");
    }
    return 0;
}