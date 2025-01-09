/* WAP to enter a number and check it is Perfect number or not - */

#include<stdio.h>
int main (){

    int a; 
    printf("Enter number : ");
    scanf("%d",&a);

int a_cpy = a;
    // Check Perfect or not - 

    int sum = 0;
    printf("Factors are - ");
    for (int i=1; i<a; i++)
    {
        if(a%i==0){
            printf("%d ",i);
            sum += i;
        }
    }

    if(a_cpy== sum)
        printf("\n%d is Perfect number ",a);
    
    else
        printf("\n%d is not a Perfect number ",a);
    


    return 0;
}