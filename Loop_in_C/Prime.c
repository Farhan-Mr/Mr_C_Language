#include <stdio.h>
int main (){

int i, n;

printf("Enter your no. :- ");
scanf("%d",&n);

int a = 0;
for( i=2; i<=i-n; i++ )
{
    if (n%i==0)
    {
         a=1;
        break;
    }
}
if (n==1)
{
    printf("1 is neither prime and nor composite ");
}
else if (a==0)
{
    printf("%d is Prime no. ",n);
}
else 
{
    printf("%d is composite no. ",n);
}
    return 0;
}