#include<stdio.h>
int main (){

int i, n;

printf("Enter n term :- ");
scanf("%d",&n);

printf("Even no. :- ");
for( i=1; i<=n; i++ )
{
   if (i%2==0)
   {
    printf("%d ",i);
   }
}
printf("\n");
printf("odd no. :- ");
for ( i=1; i<=n; i++ )
{
    if (i%2!=0)
   {
    printf("%d ",i);
   }
}
    return 0;
}