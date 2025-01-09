/* WAP enter a number and check number is palindrone or not */

#include<stdio.h>
int main (){

    int a,original; 
    printf("Enter number : ");
    scanf("%d",&a);

    original = a; 
    int last_d ;
    int reverse = 0;

    while(a>0)
    {
        last_d = a%10;
        reverse = reverse*10 + (last_d);
        a = a/10 ;
    }
    if(original == reverse )
    {
        printf("This is Palindrome Number\n%d = %d",original,reverse);
    }
        else
        {
        printf("Its not a Palindrome Number\n%d != %d",original,reverse);
        }


    return 0;
}