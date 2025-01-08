/*  WAP to enter a no and pass it to user define prime function & print number is prime or not  */

#include<stdio.h>

void check_prime(int i);    // Function decleration

int main (){    // main function

int a;
printf("Enter no : ");
scanf("%d",&a);

    check_prime(a);     // function calling

    return 0;
}
void check_prime(int a){        // Function Definition

    int count = 0;
    for(int i=1; i<=a; i++ )
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2){
        printf("%d is prime number",a);
    }
    else{
        printf("%d is not a prime number",a);
    }
}