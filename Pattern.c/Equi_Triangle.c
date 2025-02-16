/* WAP to print Equiliteral triangle */

#include<stdio.h>
int main (){

int n ;
printf("Enter no -- ");
scanf("%d",&n);
    for( int i=1; i<=n; i++ )
    {
        for( int j=n-1; j>=i; j-- )
        {
            printf(" ");
        }
        for( int k=1; k<=i; k++ )
        {
            printf("*");
        }
        for( int z=2; z<=i; z++ )
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}