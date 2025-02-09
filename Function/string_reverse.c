/*  WAP to enter a string and reverse it by calling function */

#include<stdio.h>
    void reverse( char str[] );

    int main (){

        char strr[100];
        printf("Enter string : ");
        scanf("%s",strr);
     //   printf("Given string is : %s",strr);

        reverse(strr);

        return 0;
    }
    void reverse( char str[] ){

        printf("\n\nGiven string is %s",str);
        // Count Length of string --
        int count = 0;
        for(int i=0; str[i]!='\0'; i++){
            count ++ ;
        }
        printf("\nLength of string %d",count);

        // Reversing -
        char rev[count];
        for(int i=0; i<count; i++){
            rev[i] = str[count-i-1];
        }

        printf("\nReversed string is : ");

        for(int i=0; i<count; i++)
        {
            printf("%c",rev[i]);
        }
    }
