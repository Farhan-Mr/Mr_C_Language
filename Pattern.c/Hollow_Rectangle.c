/*  WAP to print Hollow Rectangle  size (4*6)  */

#include<stdio.h>
    int main (){

        for( int i=0; i<4; i++)
        {
            for( int j=0; j<6; j++)
            {
                if( i==0 || j==0 || (i==3 && j!=0) || (i!=0 && j==5) )
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }


        return 0;
    }