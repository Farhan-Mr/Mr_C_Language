#include<stdio.h>
int main (){

    int a; 
    printf("Enter number : ");
    scanf("%d",&a);

    int count = 0;

    printf("Factors are - ");
    for(int i=1; i<=a; i++ )
    {
        if(a%i==0)
        {
            printf("%d  ",i);
            count++ ;
        }
    }
    
    if(count==2)
    {
    printf("\n%d is Prime number",a);
    }

    else
    {
    printf("\n%d is not a prime number",a);
    }
    return 0;
}