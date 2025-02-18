/* WAP to count length of string by using user define function */

// without using pointer -

#include<stdio.h>

int length( char str[] );

int main (){

    char str[100];
    printf("Enter string : ");
    scanf("%s",str);

    printf("Given string is : %s", str);

    // Call function to count its length --

    printf("\nLength if string is : %d",length(str));

    return 0;
}

int length( char str[] ){

    int len = 0;

    for(int i=0; str[i] != '\0'; i++ )
    {
        len ++ ;
    }

    return len;
}
