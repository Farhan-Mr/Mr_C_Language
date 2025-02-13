/* WAP which is divide by 3 as well as 5 */


#include <stdio.h>
int main (){

int a;
printf("Enter your no. : ");
scanf("%d",&a);

        if (a%3==0 && a%5==0)
        {
            printf("%d is Divisible by 3 and 5",a);
        }
        else
        {
            printf("%d is not Divisible by 3 and 5",a);
        }
    return 0;
}