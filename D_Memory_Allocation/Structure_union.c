/*   Write a C program to demonstrate the difference in 
    memory allocation between a structure and a union. */

    #include <stdio.h>

struct Student {
    int ID;
    char name[50];
    float marks;
};

union Data {
    int IiD;
    char nname;
    float mmarks;
};

int main() {
    struct Student stu;
    union Data data;

    printf("Size of struct Student: %lu bytes\n", sizeof(stu)); 
    printf("Size of union Data: %lu bytes\n", sizeof(data));

    return 0;
}