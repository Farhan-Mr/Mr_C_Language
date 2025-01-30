/* WAP to make a transpose matrix */

#include<stdio.h>
int main (){

    int matrix[3][3];
    int transpose[3][3];

    printf("Enter elements for matrix : \n");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                scanf("%d",&matrix[i][j]);
            }
        }
     // Transpose of a matrix -
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                transpose[j][i] = matrix[i][j] ;
            }
        }
        printf("Transpose of a matrix is : \n");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d ",transpose[i][j]);
            }
            printf("\n");
        }    
    

    return 0;
}