#include<stdio.h>
int main (){

int i, n, a;
printf("Enter a no. :- ");
scanf("%d",&n);
a=1;
for( i=1; i<=n; i++ )
{
    printf("%d ",a);
    a=a*i;
}

    return 0;
}