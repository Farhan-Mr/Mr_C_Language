#include<stdio.h>
int main (){

int n;
printf("Enter no. :- ");
scanf("%d",&n);
int a=0;
for( int j=1,i=n; j<=n && i>=1; j++,i-- )
{
    a+=i ;
    printf("%d\n",j);
}
printf("Sum is %d",a);

    return 0;
}