/* WAP to call a function and check number is palindrome or not */

#include<stdio.h>

    int palindrome(int a);

    int main (){

        int a,b;
        printf("Enter a number : ");
        scanf("%d",&a);

        // Function call -

        b = palindrome(a);

        if(a == b)
        {
            printf("Number is Palindrome\n  %d == %d ",a,b);
        }
        else
        {
            printf("Number is not Palindrome\n  %d != %d ",a,b);

        }
        return 0;
    }
    int palindrome(int a)
    {
        int reverse = 0 ;
        int lastd = 0 ;
        while(a != 0)
        {
            lastd = a % 10 ;
            reverse = (reverse * 10) + lastd ;
            a = a / 10;
        }
        return reverse ;
    }