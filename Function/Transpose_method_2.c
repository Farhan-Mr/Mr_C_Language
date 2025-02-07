/* WAP to make a matrix and call function to transpose it */
// METHOD 2

// Without using another array

#include<stdio.h>

    void transpose( int arr[][3]);               // In j enter size its mendatory - 
int main (){

    int arr[3][3];
    printf("Enter elements of matrix : \n");

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("Given elements are : \n");
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        transpose(arr);
    return 0;
}

void transpose( int arr[][3]){

    // Transpose of Matrix 

        // Without using another array
    for(int i=0; i<3; i++)
    {
        for(int j=i; j<3; j++)
        {
            int temp = arr[i][j];
            arr [i][j] = arr[j][i];
            arr[j][i] = temp ;
        }
    }
    printf("Transposed array is :\n");
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
} 
