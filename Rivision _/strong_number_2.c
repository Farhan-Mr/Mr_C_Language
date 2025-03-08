/* WAP to enter a number and check it is Strong or not */

#include<stdio.h>
int main()
{
    int a, original, lastd;
    int sum = 0 ;

    printf("Enter a number : ");
    scanf("%d",&a);

    original = a ;

    do
    {
        lastd = a % 10 ;

        int fact = 1 ;
        for(int i=1; i<= lastd; i++ )
        {
            fact *= i ;
        }
        sum += fact ;
        a /= 10 ;
    
    }while(a != 0);
    
    if( original == sum )
        {
            printf(" It is a Strong Number \n %d == %d\n",original,sum);
        }
        else{
            printf(" It is Not a Strong Number \n%d != %d\n",original,sum);
        }

    return 0;
}