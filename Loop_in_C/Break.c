#include<stdio.h>
int main (){

int i, n;

 printf("Enter your no. :- ");
 scanf("%d",&n);

printf("No.  =  ");
for( i=1; i<=n; i++ )
{
    if(i==10)
    {
        break;
    }
    
     printf("%d ",i);
}

    return 0;
}
