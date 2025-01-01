#include<stdio.h>
int main (){

int n ;
printf("Enter  your n-th  term - ");
scanf("%d",&n);

// for Even a = 2 for odd a = 1 
int a;
a = 2; 
for( int i=1 ; i<=n ; i++ )
{
   
    printf("%d ",a);
    a = a+2;
}

    return 0;
}