/* WAP to input a string and count its length */

#include<stdio.h>
int main (){

    char str[100];
    printf("\nEnter string : ");
    scanf("%s",str);

    // count string -

    int count = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        count ++ ;
    }
    printf("\nLength of string is %d ",count);

    return 0;
}