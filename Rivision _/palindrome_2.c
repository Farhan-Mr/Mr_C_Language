/* WAP to enter a number and check number is palindrome or not */

#include<stdio.h>
int main(){

    int a, original, lastd;
    int reverse = 0 ;
    printf("Enter a number : ");
    scanf("%d",&a);

    original = a;

    do
    {
        lastd = a % 10 ;
        reverse = (reverse * 10) + lastd ;
        a = a/10 ;
    }while( a !=0 );

        if( original == reverse )
        {
            printf("Number is Palindrome\n  %d == %d ",original,reverse);
        }
        else
        {
            printf("Number is not Palindrome\n  %d != %d ",original,reverse);

        }

    return 0;
}