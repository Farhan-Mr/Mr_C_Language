/* WAP to make Matrix 3*3 */

#include<stdio.h>
int main (){

int arr[3][3];

    printf("Enter elements of Row with column wise - ");
    for ( int i=0; i<3; i++ ){
            for ( int j=0; j<3; j++){
                scanf("%d",&arr[i][j]);
            }
            printf("\n");
        }
    printf("Matrix -\n");
    
    printf(" __         __\n");
    printf("|   %d  %d  %d   |\n",arr[0][0],arr[0][1],arr[0][2]);
    printf("|   %d  %d  %d   |\n",arr[1][0],arr[1][1],arr[2][2]);
    printf("|__ %d  %d  %d __|\n",arr[2][0],arr[2][1],arr[2][2]);
   
return 0;
}