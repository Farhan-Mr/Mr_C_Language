/* WAP to swap Two number ( Call by reference )*/

#include<stdio.h>

    int swap(int *a, int *b);

    int main ()
    {
        int a,b;
        printf("Enter a : ");
        scanf("%d",&a);

        printf("Enter b : ");
        scanf("%d",&b);

        printf("Before swaping :\n");
        printf("a : %d \nb : %d",a,b);

        // function call -

        swap(&a,&b);
        
        printf("\nAfter swaping :\n");
        printf("a : %d \nb : %d",a,b);

        return 0;
    }
  int swap(int *a, int *b)
  {
    int temp = *a ;
        *a   = *b ;
        *b   = temp ;

       return (*a,*b);
  
  }  