/* WAP to use of strcpy function */

#include<stdio.h>
#include<string.h>
    int main (){

        char str[10];
        char strr[10];

        printf("Enter 1st string : ");
        scanf("%s",&str);

        printf("Enter 2nd String : ");
        scanf("%s",&strr);

        printf("\n1 st string is : %s",str);
        printf("\n2 nd string is : %s",strr);

        // copy 1st string in 2nd

        printf("\n1st to 2nd -> %s ",strcpy(str,strr));

        // copy 2nd string in 1st

        printf("\n2nd to 1st -> %s ",strcpy(strr,str)); 


        return 0;
    }