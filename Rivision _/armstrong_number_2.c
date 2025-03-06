/* WAP to call a function a check number is Armstrong or not */

#include<stdio.h>

    int armstrong(int a);
   
    int main()
    {
        int a,b;
        printf("Enter a positive number : ");
        scanf("%d",&a);

        // Function call - 
        
        b = armstrong(a);

        if( a == b )
        {
            printf(" It is a Armstrong Number \n %d == %d\n",a,b);
        }
        else{
            printf(" It is Not a Armstrong Number \n%d != %d\n",a,b);
        }

        return 0;
    }
    int armstrong(int a)
    {
        int sum = 0;
        int lastd,cube;

        while( a != 0 )
        {
            lastd = a % 10 ;
            cube = lastd * lastd * lastd ;
            sum += cube ;
            a = a / 10 ;
        }
      return sum ;
    }