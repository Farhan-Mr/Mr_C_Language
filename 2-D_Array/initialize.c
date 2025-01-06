/* WAP to make 2-D Array and enter the number then print its element */

#include<stdio.h>
int main (){

    int r,c;
    printf("Enter size of row - ");
    scanf("%d",&r);
    printf("Enter size of column - ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter elements of Row with column wise - ");
        for ( int i=0; i<r; i++ ){
            for ( int j=0; j<c; j++){
                scanf("%d",&arr[i][j]);
            }
            printf("\n");
        }

    printf("Given elements in the form of matrix - \n");
        for ( int i=0; i<r; i++ ){
            for ( int j=0; j<c; j++){
                printf("%d  ",arr[i][j]);
            }
            printf("\n");
        }


    return 0;
}