/* WAP to make a hollow square 4*4 */
#include<stdio.h>
int main (){
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
               if(i==0 || j==0 || (i!=0 && j==3) || (i==3 && j!=0))
               {
                printf("* ");
               }
               else{
                printf("  ");
               }
                       
            }
            printf("\n");
        }
    return 0;
}