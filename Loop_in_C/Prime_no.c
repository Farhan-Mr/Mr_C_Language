// Wap to check Given no. is prime or not -- 

#include<stdio.h>
int main (){

    int n;
    printf("Enter no - ");
    scanf("%d",&n);

int count_f = 0 ; 

        for( int i=1; i<=n; i++ )
        {
            if( n%i==0)
            {
                printf("%d ",i);
                count_f ++ ;
            }
        }
    if(count_f==2)
    {
        printf("\nGiven no is Prime no. ");
    }
    else{
        printf("\nIts a Composite no. ");
    }

    return 0;
}