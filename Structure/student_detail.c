/*  Write a C program to create a structure for a student that stores their 
    name, roll number, and marks, and display the information.  */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
}Stu1;

int main() {

   printf("Enter Detail of Student :\n");
   scanf("%s%d%f",Stu1.name,&Stu1.roll_no,&Stu1.marks);

   printf("Student :\nName : %s\nRoll no. : %d\nMarks : %.2f",Stu1.name,Stu1.roll_no,Stu1.marks);

    return 0;
}