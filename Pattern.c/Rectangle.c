/* WAP to print a simple rectangle */

#include<stdio.h>
int main (){

    // Where Length is 4 and Breadth is 6
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=6; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}