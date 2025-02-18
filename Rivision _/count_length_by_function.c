/* WAP to count length of string by using user define function */

// with the help of pointer - 

#include<stdio.h>

int length(char *str);          // User define function 

int main (){

    char *str;
    printf("Enter string : ");
    scanf("%s",str);

    printf("Given string is %s",str);

    // Call function to count length of string --
   
    int count = length(str);

    printf("\nLength of string is : %d", count);

    return 0 ;
}

int length(char *str){

        int len = 0;
        for(int i=0; str[i] != '\0'; i++)
        {
            len ++ ;
        }

        return len;
}