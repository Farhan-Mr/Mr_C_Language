#include<stdio.h>
#include<string.h>

int main (){
     
    char str1[10];
    char str2[10];

    printf("Enter something : ");
    scanf("%s",str1);

    printf("Enter otherthing : ");
    scanf("%s",str2);

   // use of strcat -

    strcat(str1,str2);

    printf("\n%s",str1);
    return 0;
}