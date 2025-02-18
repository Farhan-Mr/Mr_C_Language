/* WAP to create a number triangle */

#include<stdio.h>
int main (){
int n;
printf("Enter no -- ");
scanf("%d",&n);
    for( int i=1; i<=n; i++ )
    {
        for( int j=n; j>=i+1; j-- ){
            printf("   ");
        }
        for( int k=1; k<=i; k++ ){
            printf(" %d ",k);
        }
        for( int z=i-1; z>=1; z-- )
        { 
            printf(" %d ",z);
        }
    printf("\n");
    }
    return 0;
}