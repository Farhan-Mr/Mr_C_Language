/* WAP to call a function to count length of string */

#include<stdio.h>

    void length( char str[] );

int main ()
{
    char str[100];
    printf("Enter string : ");
    scanf("%s",&str);
    printf("Given string is : %s",str);

    // Function call - 

    length(str);

    return 0;
}
    
void length( char str[])
{
    int count = 0; 

    for(int i=0; str[i] != '\0'; i++)
    {
        count ++ ;
    }
    printf("\nLength of Given string is : %d",count);
}