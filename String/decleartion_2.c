/* WAP to declear string - */

#include<stdio.h>
int main (){

    char str[] = {'T','O','D','A','Y','\0'};
        for(int i=0; str[i]!='\0'; i++)
        {
            printf("%c",str[i]);
        }

    return 0;
}