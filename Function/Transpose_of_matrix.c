/* WAP to make a matrix and call function to transpose it */
// METHOD 1 

#include<stdio.h>
    
void transpose( int arr[][3]);

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
        // Function Calling 
        transpose(arr);
    return 0;
}
 void transpose( int arr[][3])              // Decleared Function -
 {

    int brr[3][3];
    // Transpose --
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                brr[i][j] = arr[j][i];
            }
        }

        // Print Transpose array 
        printf("Transposed array is :\n");
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                printf("%d ",brr[i][j]);
            }
            printf("\n");
        }
 }
