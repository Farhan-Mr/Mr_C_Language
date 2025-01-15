#include<stdio.h>
int main (){

int n;
printf("Enter no --");
scanf("%d",&n);

int a = 2;
    for( int i=1; i<=n; i++ )
    {
        for(int b=i; b<=n; b++)
        {
            printf(" ");
        }
        for( int j=1; j<=i; j++ )
        {
            printf("%d ",a);
            a += 2;
            
        }
        printf("\n");

    }

    return 0;
}