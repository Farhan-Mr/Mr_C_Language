/* WAP to print ASCII value of given character */

#include<stdio.h>
    int main (){

        char ch;
        printf("Enter Character : ");
        scanf("%c",&ch);

        int x = (int)ch;

        printf("ASCII value is -> %d ",x);
        
        return 0;
    }