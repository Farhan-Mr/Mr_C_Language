/* WAP to give a example of function with argument and with return value */

#include<stdio.h>

int cube(int i);                    // Function Declear

int main (){
    
    int a;
    printf("Enter no. to find cube :  ");
    scanf("%d",&a);

    int cu = cube(a);               // Function calling
    printf("Cube is %d",cu);

    return 0;
}
int cube(int a){                    // Function Definition
    int c = a*a*a;
    return c;
}