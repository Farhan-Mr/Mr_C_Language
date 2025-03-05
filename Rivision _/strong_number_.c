/* WAP to call a function to check number is strong or not */

#include<stdio.h>
    int strong(int a);

    int main ()
    {
        int a,b;
        printf("Enter a positive number : ");
        scanf("%d",&a);

        // Function call - 
        
        b = strong(a);

        if( a == b )
        {
            printf(" It is a Strong Number \n %d == %d\n",a,b);
        }
        else{
            printf(" It is Not a Strong Number \n%d != %d\n",a,b);
        }
        return 0;
    }
  int strong(int a)
  {
    int lastd;
    int sum = 0 ;
    while( a!= 0 )
    {
        lastd = a % 10 ;

        int fact = 1;
        for(int i=1; i<= lastd; i++ )
        {
            fact = fact * i ;
        }
        sum = sum + fact ;
        a = a / 10 ;
    }
    return sum ;
  }
