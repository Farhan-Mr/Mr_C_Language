/* WAP to enter a number and check it is perfect or not */

#include<stdio.h>
int main(){

    int a , original;
    printf("Enter a number : ");
    scanf("%d",&a);

    original = a;

    int sum = 0; 
    for(int i=1; i<a; i++ )
    {
        if(a%i==0)
        {
            sum += i ;
        }
    }
    if(original == sum )
    {
        printf("%d is perfect number",original);
    }
    else
    {
        printf("%d is not a perfect number",original);
    }
    return 0;
}