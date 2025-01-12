/* WAP to compare two string */

#include<stdio.h>
#include<string.h>

int main (){
     
    char str1[10];
    char str2[10];

    printf("Enter Data 1 : ");
    scanf("%s",str1);

    printf("Enter Data 2 : ");
    scanf("%s",str2);

   // use of strcmp -

    printf("\n%d",strcmp(str1,str2));
    return 0;
}