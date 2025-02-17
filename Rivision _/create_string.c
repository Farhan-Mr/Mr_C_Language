/* WAP to create a string take input from user and print it */

#include<stdio.h>
int main (){

    char str[100];
    printf("Enter string : ");
    scanf("%s",str);
    
    // Print String -
    printf("Given string is : %s",str);

    return 0;
}