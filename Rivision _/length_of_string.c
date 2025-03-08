/* WAP to count a length of string */

#include<stdio.h>
int main ()
{

    char str[100];
    printf("Enter string : ");
    scanf("%s",&str);
    printf("Given string is : %s",str);

    int count = 0; 

    for(int i=0; str[i] != '\0'; i++)
    {
        count ++ ;
    }
    printf("\nLength of Given string is : %d",count);
    return 0;
}