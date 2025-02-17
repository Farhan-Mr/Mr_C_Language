/* WAP to create a string and take input from user then reverse it */

#include<stdio.h>
int main (){

    char str[100];
    printf("Enter string : ");
    scanf("%s",str);

    printf("\nGiven string is : %s",str);

    // Count length 
    int count = 0; 
    for(int i=0; str[i] != '\0'; i++)
    {
        count ++ ;
    }
    printf("\nLength of string is %d\n",count);

    // Reversing process - 

    int rev[count];
    for(int i=0; i<count; i++)
    {
        rev[i] = str[count-i-1] ;   
    }

    // Reverse string -
    printf("\nReversed string : ");
    for(int i=0; i<count; i++)
    {
        printf("%c",rev[i]);
    }

    return 0;
}