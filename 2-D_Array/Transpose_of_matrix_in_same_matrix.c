/*  WAP to make a matrix and enter its element then tranpose it without using 
    another matrix  */

    #include<stdio.h>
    int main (){

        int r,c;
        printf("Enter size of Row : ");
        scanf("%d",&r);
        printf("Enter size of Comumn : ");
        scanf("%d",&c);

     int arr[r][c];
         printf("Enter the elements of matrix :\n");
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    scanf("%d",&arr[i][j]);
                }   
            } 
         printf("Given matrix is :\n");
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    printf("%d ",arr[i][j]);
                }
             printf("\n");   
            }
         printf("\nTranspose of given matrix is :\n");
           for(int i=0; i<c; i++){
                for(int j=0; j<r; j++){
                    printf("%d ",arr[j][i]);
                }
             printf("\n");   
            }           
        
        return 0;
    }