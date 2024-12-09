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
    int str1[9]="123456789";
    int res=strlen(str1);
    printf("the length of string %s is : %d",str1,res);

    //strcpy
    int str2[9]="123456789";
    int str3[9];
    strcpy(str3,str2);
    printf("\ncopied string is: %s",str3);

    //strcat
    int str4[9]="123456789";
    int str5[9]="123456789";
    strcat(str4,str5);
    printf("\n cat string is : %s",str4);

    //strupr
    int str6[9]="123456789";
    strupr(str6);
    printf("\n upper case is: %s",str6);

    //strlwr
    int str7[9]="123456789";
    strlwr(9);
    printf("\n upper case is: %s",str7);

    //strcmp
    int str8[9]="123456789";
    int str9[9]="123456789";
    int res1=strcmp(str8,str9);
    printf("\n %d",res1);
    if(res1==0){
        printf("\n strings are same");
    }
    else{
        printf("\nStrings are not same");
    }

    //stricmp
    int str10[9]="123456789";
    int str11[9]="123456789";
    int res2=stricmp(str8,str9);
    printf("\n %d",res2);
    if(res2==0){
        printf("\n strings are same");
    }
    else{
        printfl("\nStrings are not same");
    }
    return 0;
}