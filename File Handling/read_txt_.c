#include<stdio.h>
#include<stdlib.h>
    int main (){

        int ch;
        FILE *ptr ;

        ptr = fopen("work.txt","r");
        fscanf(ptr,"%c",&ch);

        while( (ch=getc(ptr))!=EOF)
        {
            printf("%c",ch);
        }
    return 0;
    }