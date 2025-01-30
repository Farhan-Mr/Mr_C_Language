/*  Write a C program to calculate the transpose of a 3x3 matrix  */

#include <stdio.h>

int main() {
    int matrix[5][5], transpose[5][5];

    printf("Enter elements for matrix :\n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose of Matrix -
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            transpose[j][i] = matrix[i][j]; 
        }
    }

    // Print the transpose
    printf("\nTranspose of matrix is :\n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}