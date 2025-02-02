/* WAp to count length of string without using string.h library and function */

#include<stdio.h>
    int main (){

        char *str; 
        printf("Enter Sring : ");
        scanf("%s",str);

        printf("\nString is : %s \n",str);

        // Count String -- 
        int count = 0 ;
        for(int i=0; str[i]!='\0'; i++)
        {
            count ++ ;
        }
        printf("\nLength of String is : %d",count);

        return 0;
}