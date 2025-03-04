/* WAP to use of strlen function */

#include<stdio.h>
#include<string.h>
    int main (){

        char str[10];

        printf("Enter string : ");
        scanf("%s",str);

        printf("Given string is : %s ",str);
        
        // Length of string is -
        printf("\nLength is %d",strlen(str));

        return 0;
    }