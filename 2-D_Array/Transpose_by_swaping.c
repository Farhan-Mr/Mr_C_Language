/*  WAP to make a matrix and enter its element then tranpose it with help of swaping  */

    #include<stdio.h>
    int main (){

        int r;
        printf("Enter size of Row and column : ");
        scanf("%d",&r);

     int arr[r][r];
         printf("Enter the elements of matrix :\n");
            for(int i=0; i<r; i++){
                for(int j=0; j<r; j++){
                    scanf("%d",&arr[i][j]);
                }   
            } 
         printf("\nGiven matrix is :\n");
            for(int i=0; i<r; i++){
                for(int j=0; j<r; j++){
                    printf("%d ",arr[i][j]);
                }
             printf("\n");   
            }
         printf("\nTranspose of given matrix is :\n");
           for(int i=0; i<r; i++){
                for(int j=i; j<r; j++){                 // Major Change is here -> (j=i)
                                        
                    int  temp = arr[i][j];      // swaping method to transpose it - 
                    arr[i][j] = arr[j][i];
                    arr[j][i] = temp;
                }
             printf("\n");   
            }
            for(int i=0; i<r; i++){
                for(int j=0; j<r; j++){
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }          
        
        return 0;
    }