/* WAP to use of Continue statement */

#include<stdio.h>
int main (){

int i, n;

 printf("Enter your no. :- ");
 scanf("%d",&n);

printf("Even no.  =  ");
for( i=1; i<=n; i++ )
{
    if (i%2!=0)
    {
       continue;
    }
     printf("%d ",i);
}

    return 0;
}