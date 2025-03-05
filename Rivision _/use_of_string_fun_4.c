/* WAP to use of strcmp function */


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

        // strcmp function -

        printf("\n String Comparing -> %d ",strcmp(str,strr));


        return 0;
    }