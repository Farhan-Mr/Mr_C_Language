/* WAP to call a function and check number is prime or not */

#include<stdio.h>
    
int prime(int p);

int main (){

    int a; 
    printf("Enter number : ");
    scanf("%d",&a);

    // Function call 

    int fact = prime(a);
    

    if(fact == 2)
    {
        printf("%d is a Prime Number ",a);
    }
    else
    {
        printf("%d is not a prime number ",a);
    }

    return 0;
}

int prime(int a){

    int count = 0;


    for(int i=1; i<=a; i++ )
    {
        if(a%i==0){
            count ++ ;
        }
    }
    return count;
}