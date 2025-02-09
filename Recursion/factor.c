/* WAP to enter a number and find its factor using recursive function */

#include<stdio.h>

void factor(int x,int i);

int main(){

    int a;
    int i = 1;
    printf("Enter number : ");
    scanf("%d",&a);

    // Function calling 
      factor(a,i);

    return 0;
}

    // Decleared function --  
void factor(int a,int i){
   
    if(i>a){
        return;
    }
    if(a % i == 0){
        printf("%d ",i);
    }
    factor(a,i+1);              // function calling to find factor (recursive function)
    
}
