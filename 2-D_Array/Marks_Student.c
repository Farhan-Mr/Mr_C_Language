/*  Write a C program to store and display student marks in 3 subjects 
    for 5 students using a 2D array.  */

#include <stdio.h>

int main() {
    int marks[5][3]; // 5 student 3 subject -

    printf("Enter marks for 5 students in 3 subjects :\n");
    for (int i=0; i<5; i++){
        printf("Enter marks for student %d :\n",(i+1));
        for (int j=0; j<3; j++){
            printf("Subject %d : ",(j+1));
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\nMarks of 5 students in 3 subjects :\n");
    for (int i=0; i<5; i++) {
        printf("Student %d: ",(i+1));
        for (int j=0; j<3; j++) {
            printf("%d Subject : %d ",(j+1), marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}