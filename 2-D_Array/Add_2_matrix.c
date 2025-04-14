/*  Write a C program to add two 3x3 matrices 
    using two-dimensional arrays. */

#include <stdio.h>

int main() {
    int arr[3][3], brr[3][3], add[3][3];
    int i, j;

    printf("Enter elements for 1st matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter elements for 2nd matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Addition of Both Matrix -
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            add[i][j] = arr[i][j] + brr[i][j];
        }
    }
    // print Result -
    printf("Sum of the matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
      printf("\n Task Done "); 

    return 0;
}