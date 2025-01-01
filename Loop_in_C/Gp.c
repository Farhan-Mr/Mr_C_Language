#include<stdio.h>
int main (){

int i, n, a;
printf("Enter your n-th term :- ");
scanf("%d",&n);

a=3;
for( i=1; i<=n; i++ )
{
    printf("%d ",a);
    a = a*3;
}

    return 0;
}