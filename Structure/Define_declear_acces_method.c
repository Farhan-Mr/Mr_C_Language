#include<stdio.h>

    struct Employee {
        char *name ;
        int age;
        float salary ;
    }emp2;

int main (){    
    struct Employee emp1 = {"Farhan",19,80000.50};
    
    struct Employee emp3 = {"Aashish",18,79500.50};
    
    emp2.name = "Rakshit";
    emp2.age = 19;
    emp2.salary = 79000.50;
    
            printf("Employee 1\nName = %s\nAge = %d\nSalary = %.2f",emp1.name,emp1.age,emp1.salary);
        printf("\nEmployee 1\nName = %s\nAge = %d\nSalary = %.2f",emp2.name,emp2.age,emp2.salary);
    printf("\nEmployee 1\nName = %s\nAge = %d\nSalary = %.2f",emp3.name,emp3.age,emp3.salary);


    
    return 0;
}