/* WAP to create structure */
#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s1, s2;
    s1.id = 1;
    strcpy(s1.name, "ABC");
    s1.marks = 85.5;

    s2.id = 2;
    strcpy(s2.name, "DEF");
    s2.marks = 90.0;

    printf("Student 1:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    printf("\nStudent 2:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}