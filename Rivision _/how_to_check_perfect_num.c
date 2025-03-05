/* WAP to call a function to check number is perfect or not */

#include<stdio.h>

    int perfect(int n);

    int main ()
    {

        int a,b;
        printf("Enter number : ");
        scanf("%d",&a);

        // function call 
        b = perfect(a);

        if(b==a)
        {
            printf("%d is Perfect number",a);
        }
        else
        {
            printf("%d is not a Perfect number ",a);
        }

        return 0;
    }
  int perfect(int a)
  {
    int sum = 0 ;
    printf("\nNumber is %d",a);
    for(int i=1; i<a; i++)
    {
        if(a%i==0){
            sum += i ;
        }
    }
    printf("\nSum is %d\n",sum);
    return sum;
  }  